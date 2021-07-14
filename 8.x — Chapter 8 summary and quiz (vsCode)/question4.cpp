#include <iostream>
 
template <typename T>
int count(T x)
{
    static int c { 0 };
    return ++c;
}
 
int main()
{
    std::cout << count(1);
    std::cout << count(1);
    std::cout << count(2.3);
    std::cout << count<double>(1);
    
    return 0;
}