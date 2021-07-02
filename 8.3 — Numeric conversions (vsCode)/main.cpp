#include <iostream>
#include <iomanip> // for set::precisions()

void someFcn(int i)
{
}

int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "numeric conversions" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    /*
    There are five basic types of numeric conversions.

    1) Converting an integral type to any other integral type (excluding integral promotions):
    */

    short s{ 3 };// convert int to short
    long l{ 3 };// convert int to long
    char ch = s;// convert int to char

    /*
    2) Converting a floating point type to any other floating point type 
    (excluding floating point promotions):
    */

    float f{ 3.0 }; // convert double to float
    long double ld{ 3.0 };// convert double to long double

    //3) Converting a floating point type to any integral type:
    
    int i = 3.5;// convert double to int

    //4) Converting an integral type to any floating point type:

    double d{ 3 };// convert int to double

    //5) Converting an integral type or a floating point type to a bool:

    bool b1 = 3; // convert int to bool
    bool b2 = 3.0; // convert double to bool


    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Narrowing conversions" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    int i1 = 3.5;// the 0.5 is dropped, resulting in lost data
    int i2 = 3.0; // okay, will be converted to value 3, so no data is lost

    /*
    In general, narrowing conversions should be avoided, but there are situational cases 
    where you might need to do one. In such cases, you should make the implicit narrowing 
    conversion explicit by using static_cast. For example:
    */

    double d2{ 5.0 };

    someFcn(d);// bad: will generate compiler warning about narrowing conversion

    someFcn( static_cast<int>(d) );// good: we're explicitly telling the compiler this narrowing 
                                   //conversion is expected, no warning generated.

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Brace initialization disallows narrowing conversions" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Narrowing conversions are strictly disallowed when using brace initialization 
    (which is one of the primary reasons this initialization form is preferred):
    */

    //    int x { 3.5 }; // won't compile
          int x2 = 3.5;
    
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "More on numeric conversions" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    The specific rules for numeric conversions are complicated and numerous, so here are the most 
    important things to remember.

    In all cases, converting a value into a type whose range doesn’t support that value will lead to 
    results that are probably unexpected. For example:
    */

    int i22 { 30000 };
    char c = i22; // chars have range -128 to 127

    std::cout << static_cast<int>(c) << '\n';

    /*
    In this example, we’ve assigned a large integer to a variable with type char 
    (that has range -128 to 127). This causes the char to overflow, and produces an unexpected result:
    48
    */

    /*
    In the case of floating point values, some rounding may occur due to a loss of precision in 
    the smaller type. For example:
    */

    float f1 = 0.123456789; // double value 0.123456789 has 9 significant digits, but float can only support about 7
    std::cout << "Before set precision: "<< f1 << '\n';
    std::cout << "After set precision: " << std::setprecision(9) << f1 << '\n';
    


    


    return 0;
}