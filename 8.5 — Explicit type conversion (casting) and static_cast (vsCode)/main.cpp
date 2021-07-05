#include <iostream>

int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Type casting" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    C++ supports 5 different types of casts: C-style casts, static casts, const casts, dynamic casts, 
    and reinterpret casts. The latter four are sometimes referred to as named casts.

    We’ll cover C-style casts and static casts in this lesson.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "C-style casts" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    In standard C programming, casts are done via the () operator, with the name of the type to 
    convert the value to placed inside the parenthesis. You may still see these used in code 
    (or by programmers) that have been converted from C.
    */
    //For example:

    int x{ 10 };
    int y{ 4 };

    double z{ (double)x / y };// convert x to a double so we get floating point division
    //double z{ double(x) / y }; its same

    std::cout << z << '\n';  // prints 2.5

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "static_cast" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    C++ introduces a casting operator called static_cast, which can be used to convert a value of 
    one type to a value of another type.

    You’ve previously seen static_cast used to convert a char into an int so that std::cout prints it 
    as an integer instead of a char:
    */

    char c{ 'a' };
    std::cout << std::boolalpha;
    std::cout << c << ' ' << static_cast<bool>(c) << '\n'; // prints a true

    //Static_cast is best used to convert one fundamental type into another:

    int x1{ 10 };
    int x2{ 24 };

    // static cast x1 to a double so we get floating point division
    double d3{ static_cast<double>(x1) / x2 };
    std::cout << d3 << '\n';// print 0.416667

    std::cout << std::endl;
    ////////////////////////////////////////////////////////////////////////////////
    std::cout << "////////////////////////////////////////////////////////" << '\n';
    std::cout << "Using static_cast to make narrowing conversions explicit" << '\n';
    std::cout << "////////////////////////////////////////////////////////" << '\n';
    ////////////////////////////////////////////////////////////////////////////////
    

    return 0;
}