#include <iostream>

int main()
{
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Quick review" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    ////////////////////////////////////////////////////////////////////////////

    /*
    Question #1

    What type of conversion happens in each of the following cases? Valid answers are: 
    No conversion needed, numeric promotion, numeric conversion, won’t compile due to 
    narrowing conversion. Assume int and long are both 4 bytes.
    */
    /*
    int a { 5 }; // 1a
    int b { 'a' }; // 1b
    int c { 5.4 }; // 1c
    int d { true }; // 1d
    int e { static_cast<int>(5.4) }; // 1e
 
    double f { 5.0f }; // 1f
    double g { 5 }; // 1g
 
    // Extra credit section
    long h { 5 }; // 1h
 
    float i { f }; // 1i
    float j { 5.0 }; // 1j
    */

    /*
    Question #2

    2a) Upgrade the following program using type aliases:
    */
    //go see question2.cpp

    /*
    2b) Building on quiz 2a, explain why the following statement will or won’t compile:
    */

    /*
    Question #3

    3a) What is the output of this program and why?

    go see question3.cpp...
    */
    
    return 0;
}