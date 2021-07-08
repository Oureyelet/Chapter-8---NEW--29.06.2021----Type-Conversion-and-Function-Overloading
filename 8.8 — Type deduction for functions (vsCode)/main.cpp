#include <iostream>

int add(int x, int y)
{
    return (x + y);
}

auto add2(int x, int y) -> int
{
    return (x + y);
}

int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Trailing return type syntax" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    
    //Consider the following function:
    add(5, 2);

    
    //Using the trailing return syntax, this could be equivalently written as:
    add2(2, 5);

    /*
    For now, we recommend the continued use of the traditional function return syntax 
    except in situations that require the trailing return syntax.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////////" << '\n';
    std::cout << "Type deduction can’t be used for function parameter types" << '\n';
    std::cout << "/////////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////////
    


    return 0;
}