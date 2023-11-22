#include <iostream>

int main()
{
    // illegal std::cin >> int input_value;
    //legal:
    int input_value;
    std::cout << "Type value: " << std::endl;
    std::cin >> input_value;
    std::cout << input_value << std::endl;

    // illegal int i = {3.4}; cant give floating point literal as init value for type int
    // illegal bc wage has no type double salary = wage = 9.9999; 
    double wage, salary;
    wage = salary = 99.999;

    return 0;
}