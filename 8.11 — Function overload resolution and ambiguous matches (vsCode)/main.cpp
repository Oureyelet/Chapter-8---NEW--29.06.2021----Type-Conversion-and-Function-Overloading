#include <iostream>

void print(int x)
{
    std::cout << x << '\n';
}

void print(double d)
{
    std::cout << d << '\n';
}

void print(unsigned int x)
{
    std::cout << x << '\n';
}

int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Function overload resolution and ambiguous matches" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    In simple cases where the type of the function arguments and type of the function parameters 
    match exactly, this is (usually) straightforward:
    */
    print(5);// 5 is an int, so this matches print(int)
    print(5.5);// 5.5 is a double, so this matches print(double)
    
    /*
    But what happens in cases where the argument types in the function call don’t exactly match the 
    parameter types in any of the overloaded functions? For example:
    */
    //print('a');// char does not match int or double
    //print(5l);// long does not match int or double

    /*
    In this lesson, we’ll explore how the compiler matches a given function call to a 
    specific overloaded function.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Resolving overloaded function calls" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "The argument matching sequence" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Ambiguous matches" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Resolving ambiguous matches" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    int x1{ 0 };

    print( static_cast<unsigned int>(x1) );

    /*
    If your argument is a literal, you can use the literal suffix to ensure your literal is 
    interpreted as the correct type:
    */

    print(0u);// will call print(unsigned int) since 'u' suffix is unsigned int, so this is now an exact match

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Matching for functions with multiple arguments" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    







    return 0;
}