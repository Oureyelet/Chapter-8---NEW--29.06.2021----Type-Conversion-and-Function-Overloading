#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Type deduction for initialized variables" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Type deduction (also sometimes called type inference) is a feature that allows the compiler 
    to deduce the type of an object from the object’s initializer. To use type deduction, 
    the auto keyword is used in place of the variable’s type:
    */
    auto d{ 5.0 };// 5.0 is a double literal, so d will be type double
    auto i{ 1 + 2 };// 1 + 2 evaluates to an int, so i will be type int
    auto x{ i };// i is an int, so x will be type int too

    auto sum{ add(23, 45) };// add() returns an int, so sum's type will be deduced to int

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Type deduction drops const qualifiers" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    const int my{ 5 };// 'my' has type const int
    auto your{ my };// 'your' will be type int (const is dropped)

    /*
    If you want a deduced type to be const, you can use the const keyword in conjunction 
    with the auto keyword:
    */
    const auto your2{ my };// 'your2' will be type const int

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Type deduction drops references" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    if you use type deduction with an initializer of type int&, the deduced type will be “int”, not “int&”.
    */

    int k{ 5 };// k is a normal int
    int& l{ k };// l is an int& reference
    auto n{ l };// n will be an "int", not an "int&" because references are dropped

    //You can ensure a deduced type is a reference type by using auto& instead of auto:

    auto& u{ l };// type deduced is "int", but we've provided an &, so y will be an "int&" reference

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Type deduction benefits and downsides" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    










    return 0;
}