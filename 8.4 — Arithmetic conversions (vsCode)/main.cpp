#include <iostream>
#include <typeinfo> // for 'typeid()'

int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Arithmetic conversions" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    But what happens when the operands of a binary operator are of different types?
    */
    // ??? y { 2 + 3.5 }; 
    /*
    In C++, certain operators require that their operands be of the same type. 
    If one of these operators is invoked with operands of different types, one or both of the 
    operands will be implicitly converted to matching types using a set of rules called the usual 
    arithmetic conversions.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "The operators that require operands of the same type" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    The following operators require their operands to be of the same type:

    The binary arithmetic operators: +, -, *, /, %
    The binary relational operators: <, >, <=, >=, ==, !=
    The binary bitwise arithmetic operators: &, ^, |
    The conditional operator ?: (excluding the condition, which is expected to be of type bool)
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "The usual arithmetic conversion rules" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Some examples" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    In the following examples, we’ll use the typeid operator (included in the <typeinfo> header), 
    to show the resulting type of an expression.
    */

    //First, let’s add an int and a double:
    int tt{ 2 };
    double yy{ 3.5 };

    std::cout << typeid(tt + yy).name() << ' ' << tt + yy << '\n';// show us the type of tt + yy

    //Now let’s add two values of type short:
    short a1{ 4 };
    short a2{ 5 };

    std::cout << typeid(a1 + a2).name() << ' ' << a1 + a2 << '\n';// show us the type of tt + yy

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Signed and unsigned issues" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    This prioritization hierarchy can cause some problematic issues when mixing signed and unsigned values. 
    For example, take a look at the following code:
    */
    std::cout << typeid(5u - 10).name() << ' ' << 5u - 10 << '\n';// 5u means treat 5 as an unsigned integer

    //Here’s another example showing a counterintuitive result:
    std::cout << std::boolalpha << (-3 < 5u) << '\n';

    /*
    This is one of the primary reasons to avoid unsigned integers -- when you mix them with signed 
    integers in arithmetic expressions, you’re at risk for unexpected results. And the compiler 
    probably won’t even issue a warning.
    */




    


    return 0;
}