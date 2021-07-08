#include <iostream>

int add(int x, int y)
{
    return (x + y);
}

double add(double x, double y)
{
    return (x + y);
}


int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Introduction to function overloading" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Fortunately, C++ has an elegant solution to handle such cases. Function overloading allows 
    us to create multiple functions with the same name, so long as each identically named function 
    has different parameters (or the functions can be otherwise differentiated). Each function sharing 
    a name (in the same scope) is called an overloaded function (sometimes called an overload for short).

    To overload our add() function, we can simply declare another add() function that takes double 
    parameters:
    */
    std::cout << add(3.3, 6.6) << '\n';
    std::cout << add(3, 6) << '\n';

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Introduction to overload resolution" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Making it compile" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    In order for program using overloaded functions to compile, two things have to be true:

    Each overloaded function has to be differentiated from the others. We discuss how functions 
    can be differentiated in lesson 8.10 -- Function overload differentiation.
    Each call to an overloaded function has to resolve to an overloaded function. We discuss how 
    the compiler matches function calls to overloaded functions in lesson 8.11 -- Function overload 
    resolution and ambiguous matches.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Conclusion" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Best practice

    Use function overloading to make your program simpler.
    */


    return 0;
}