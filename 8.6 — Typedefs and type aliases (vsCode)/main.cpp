#include <iostream>
#include "mytypes.h"
#include <string> // for std::string
#include <vector> // for std::vector
#include <utility> // for std::pair

bool hasDuplicates(std::vector< std::pair<std::string, int> > pairList)
{
    //some code...

    return false;
}

using error_t = int;

error_t printData(); // function prototype.

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

    typedef long miles_t;// define miles_t as an alias for type long
    typedef long speed_t;// define speed_t as an alias for type long

    miles_t distance{ 5 };// distance is actually just a long
    speed_t mhz{ 3200 };// mhz is actually just a long

    // The following is syntactically valid (but semantically meaningless)
    distance = mhz;

    /*
    Warning

    Care must be taken not to mix values of typedefs that are intended to be semantically distinct.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "The scope of typedefs" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Because scope is a property of an identifier, typedef identifiers follow the same scoping rules as 
    variable identifiers: a typedef defined inside a block has block scope and is usable only within 
    that block, whereas a typedef defined in the global namespace has file scope and is usable to the 
    end of the file. In the above example, miles_t and speed_t are only usable in the main() function.
    */

    /*
    If you need to use one or more typedefs across multiple files, they can be defined in a header 
    file and #included into any code files that needs to use the definition:
    */

    pcosSIO siosi{ 100000 };
    kochamCieJezu bardzo{ '!' };
    pcosSIO staticc{ static_cast<int>(bardzo) };

    std::cout << siosi << ' ' << staticc << '\n';

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Typedef issues" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Type aliases" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    To help address the above-mentioned syntactical issues, an improved syntax for defining 
    typedefs was introduced, called a type alias.
    */

    //Given the following typedef:
    typedef double distance2_t;// define distance2_t as an alias for type double

    //The equivalent type alias syntax looks like this:
    using distance3_t = int;// define distance_t as an alias for type int

    /*
    Type aliases are functionally equivalent to typedefs, but come with the benefit of a nicer 
    definition syntax.
    */

    //Here is the hard-to-read typedef we introduced above, along with an equivalent 
    //(and slightly easier to read) type alias:

    typedef int (*fcn_t)(double, char);// fcn_t hard to find
    using fcn2_t = int(*)(double, char);// fcn_t easier to find

    /*
    Best practice

    When creating aliased types, prefer the type alias syntax over the typedef syntax.
    */ 

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "When should we use type aliases?" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Now that we’ve covered what typedefs and type aliases are, let’s talk about what they are useful for.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Using type aliases for platform independent coding" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    more info go see:

    https://www.learncpp.com/cpp-tutorial/typedefs-and-type-aliases/
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Using type aliases to make complex types simple" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Although we have only dealt with simple data types so far, in advanced C++, types can get 
    complicated and lengthy to type. For example, you might see 
    a function and variable defined like this:
    */


    std::vector<std::pair<std::string, int> > pairlist;

    /*
    Typing std::vector<std::pair<std::string, int> > everywhere you need to use that type 
    is cumbersome and easy to typo. It’s much easier to use a type alias:
    */

    using pairlist_t  = std::vector<std::pair<std::string, int> >;
    // make pairlist_t an alias for this crazy type

    /*
    Much better! Now we only have to type pairlist_t instead of 
    std::vector<std::pair<std::string, int> >.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Using type aliases for legibility" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    //For example, given the following function:
    // int gradeTest();

    /*
    We can see that the return value is an integer, but what does the integer mean? A letter grade? 
    The number of questions missed? The student’s ID number? An error code? Who knows! 
    */

    //Now let’s do an equivalent version using a type alias:

    using testScore_t = int;

    testScore_t gradeTest{};

    /*
    The return type of testScore_t makes it a little more obvious that the function is returning 
    a type that represents a test score.
    */

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Using type aliases for easier code maintenance" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    if you use type aliases, then changing types becomes as simple as updating the type alias 
    (e.g. from using studentID_t = short; to using studentID_t = long;).
    */
    
    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Downsides and conclusion" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////

    std::cout << std::endl;
    /////////////////////////////////////////////////////////////////////////////
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    std::cout << "Quiz time" << '\n';
    std::cout << "/////////////////////////////////////////////////////" << '\n';
    /////////////////////////////////////////////////////////////////////////////
    /*
    Question #1

    Given the following function prototype:

    int printData();

    Convert the int return value to a type alias named error_t. Include both the type alias 
    statement and the updated function prototype.
    */


    






    


    return 0;
}

error_t printData()
{
    return 0;
}