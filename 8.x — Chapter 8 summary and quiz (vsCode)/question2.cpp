#include <iostream>
 
using mytype_1 = double;

namespace constants
{
    inline constexpr mytype_1 pi { 3.14159 };
}
 
mytype_1 convertToRadians(mytype_1 degrees)
{
    return degrees * constants::pi / 180;
}
 
int main()
{
    std::cout << "Enter a number of degrees: ";
    mytype_1 degrees{};
    std::cin >> degrees;
 
    mytype_1 radians { convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";
 
    return 0;
}