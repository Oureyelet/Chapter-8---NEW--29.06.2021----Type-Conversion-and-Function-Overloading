#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x > y) ? x : y;
}

template <typename T1, typename U>// We're using two template type parameters named T1 and U
auto max(T1 x, U y)// x can resolve to type T, and y can resolve to type U
{
    return (x > y) ? x : y;// uh oh, we have a narrowing conversion problem here
    /*
    How do we solve this? This is a good use for an auto return type -- we’ll let the compiler 
    deduce what the return type should be from the return statement:
    */
}

int main()
{

    /*
    template <typename T>
    T max(T x, T y)
    {
        return (x > y) ? x : y;
    }
     std::cout << max(2, 3.5) << '\n';  // compile error

    */

    /*
    We’ll have to find another solution. Fortunately, we can solve this 
    problem in (at least) three ways.
    */

    std::cout << std::endl;
    //////////////////////////////////////////////////////////////////////////////////
    std::cout << "//////////////////////////////////////////////////////////" << '\n';
    std::cout << "Use static_cast to convert the arguments to matching types" << '\n';
    std::cout << "//////////////////////////////////////////////////////////" << '\n';
    //////////////////////////////////////////////////////////////////////////////////

    std::cout << max(static_cast<double>(2), 3.5) << '\n';
    // convert our int to a double so we can call max(double, double)

    std::cout << std::endl;
    //////////////////////////////////////////////////////////////////////////////////
    std::cout << "//////////////////////////////////////////////////////////" << '\n';
    std::cout << "Provide an actual type" << '\n';
    std::cout << "//////////////////////////////////////////////////////////" << '\n';
    //////////////////////////////////////////////////////////////////////////////////

    std::cout << max<double>(2, 3.5) << '\n';
    // we've provided actual type double, so the compiler won't use template argument deduction


    std::cout << std::endl;
    //////////////////////////////////////////////////////////////////////////////////
    std::cout << "//////////////////////////////////////////////////////////" << '\n';
    std::cout << "Functions templates with multiple template type parameters" << '\n';
    std::cout << "//////////////////////////////////////////////////////////" << '\n';
    //////////////////////////////////////////////////////////////////////////////////
    /*
    The root of our problem is that we’ve only defined the single template type (T) for our function 
    template, and then specified that both parameters must be of this same type.

    The best way to solve this problem is to rewrite our function template in such a way that our 
    parameters can resolve to different types. Rather than using one template type parameter T, 
    we’ll now use two (T and U):
    */
    std::cout << max(2, 5.5) << '\n';

    
    std::cout << std::endl;
    //////////////////////////////////////////////////////////////////////////////////
    std::cout << "//////////////////////////////////////////////////////////" << '\n';
    std::cout << "Abbreviated function templates" << '\n';
    std::cout << "//////////////////////////////////////////////////////////" << '\n';
    //////////////////////////////////////////////////////////////////////////////////
    /*
    auto max(auto x, auto y)
    {
        return (x > y) ? x : y;
    }
    */
    /*
    Best practice

    Feel free to use abbreviated function templates if each auto parameter should be 
    an independent template type (and your language standard is set to C++20 or newer).
    */

    


    return 0;
}