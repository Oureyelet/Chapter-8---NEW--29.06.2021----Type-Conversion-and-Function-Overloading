#include <iostream>

int max(int x, int y)
{
    return (x > y) ? x : y;
}
/*
//Short Hand If...Else (Ternary Operator)//

int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
} 


int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result; 
*/

/*
Here’s our new function that uses a single template type:
*/
template <typename T>// this is the template parameter declaration
T max(T x, T y)// this is the function template definition for max<T>
{
    return (x > y) ? x : y;
}
/*
There is no difference between the typename and class keywords in this context. 
You will often see people use the class keyword since it was introduced into the language earlier. 
However, we prefer the newer typename keyword, because it makes it clearer that the template type 
can be replaced by any type (such as a fundamental type), not just class types.
*/


int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "-----" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Let’s say you wanted to write a function to calculate the maximum of two numbers. 
    You might do so like this:
    */
    std::cout << max(12,45) << '\n';

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Introduction to C++ templates" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    In C++, the template system was designed to simplify the process of creating functions 
    (or classes) that are able to work with different data types.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Function templates" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    A function template is a function-like definition that is used to generate one or more overloaded 
    functions, each with a different set of actual types. This is what will allow us to create functions 
    that can work with many different types.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Creating a templated max function" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Believe it or not, we’re done!

    In the next lesson, we’ll look at how we use our max<T> function template to generate max() 
    functions with parameters of different types.
    */













    return 0;
}