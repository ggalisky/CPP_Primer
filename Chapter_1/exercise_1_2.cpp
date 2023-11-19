//page 42
#include <iostream>

void exercise_one_three(); // function prototypes. Without this the complier will complain about these functions not existing
void exercise_one_four();
void exercise_one_five();


int main()
{
    std::cout<< "Enter two numbers:" << std::endl;
    int value_1 = 0, value_2 = 0;
    std::cin >> value_1 >> value_2;
    std::cout << "The sum of " << value_1 << " and " << value_2 << " is " << value_1 + value_2 << std::endl;


    std::cout<< "Excercise 1.3:" << std::endl;
    exercise_one_three();
    std::cout<< "Excercise 1.4:" << std::endl;
    exercise_one_four();
    std::cout<< "Excercise 1.5:" << std::endl;
    exercise_one_five();

    return 0;
}

void exercise_one_three()
{
    std::cout << "Hello World" << std::endl;
}

void exercise_one_four()
{
    std::cout<< "Enter two numbers:" << std::endl;
    int value_1 = 0, value_2 = 0;
    std::cin >> value_1 >> value_2;
    std::cout << "The product of " << value_1 << " and " << value_2 << " is " << value_1 * value_2 << std::endl;
}

void exercise_one_five()
{
    std::cout<< "Enter two numbers:" << std::endl;
    int value_1 = 0, value_2 = 0;
    std::cin >> value_1 >> value_2;
    std::cout << "The product of "; 
    std::cout<< value_1; 
    std::cout << " and " ;
    std::cout << value_2;
    std::cout << " is ";
    std::cout << value_1 * value_2;
    std::cout << std::endl;

}

/*
Exercise 1.6

The program fragment is illegal, since lines 2 and 3 have the "<<" operand without the accompanying istream operand

This can be fixed by adding std::cout to the front of lines 2 and 3

*/