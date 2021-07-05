#include <iostream>

int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "The typedef keyword" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    In C++, typedef (which is short for “type definition”) is a keyword that creates an alias for 
    an existing data type. To create such an alias, we use the typedef keyword, followed by an existing 
    data type to alias, followed by a name for the alias. For example:
    */

    typedef double distance_t; // define distance_t as an alias for type double
    /*
    By convention, typedef names typically use a “_t” suffix. This both indicates that the name is 
    a typedef, and helps prevent naming collisions with other types of identifiers.
    */

    distance_t milesToDestination{ 3.3 };// defines a variable of type double 
    std::cout << milesToDestination << '\n';// prints a double value

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Typedefs are not new types" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////



    


    return 0;
}