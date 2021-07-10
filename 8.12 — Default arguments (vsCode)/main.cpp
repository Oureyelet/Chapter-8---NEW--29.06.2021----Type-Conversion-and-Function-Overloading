#include <iostream>
#include <string>

void print(int x, int y=10)// 10 is the default argument
{
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
}

void print3(int x=10, int y=20, int z=30)
{
    std::cout << "Values: " << x << " " << y << " " << z << '\n';
}

void print4(std::string string)
{
    std::cout << string << '\n';
}

void print4(char ch= ' ')
{
    std::cout << ch << '\n';
}

int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Default arguments" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    A default argument is a default value provided for a function parameter. For example:
    */
    print(7, 3);// y will use user-supplied argument 3
    print(7);// y will use default argument 10

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "When to use default arguments" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Default arguments are an excellent option when a function needs a value that has a reasonable 
    default value, but for which you want to let the caller override if they wish.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Multiple default arguments" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    //A function can have multiple parameters with default arguments:

    print3(1, 2, 3);// all explicit arguments
    print3(1, 2);// rightmost argument defaulted
    print3(1);// two rightmost arguments defaulted
    print3();// all arguments defaulted

    /*
    C++ does not (as of C++20) support a function call syntax such as print(,,3) 
    (as a way to provide an explicit value for z while using the default arguments for x and y. 
    This has two major consequences:

    1) Default arguments can only be supplied for the rightmost parameters. 
    The following is not allowed:

    void print(int x=10, int y); // not allowed
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Default arguments can not be redeclared" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Best practice

    If the function has a forward declaration (especially one in a header file), put the 
    default argument there. Otherwise, put the default argument in the function definition.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Default arguments and function overloading" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    //Functions with default arguments may be overloaded. For example, the following is allowed:
    print4("Hello World");// resolves to print(std::string)
    print4('a');// resolves to print(char)
    print4();// resolves to print(char)

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Summary" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    


    return 0;
}