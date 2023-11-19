#include <iostream>
#include "Sales_item.h"


//exercise 1.20



int main()
{
    std::cout << "Enter two Sales_items: " << std::endl;
    Sales_item itemA, itemB;
    std::cin >> itemA >> itemB; // read two transactions and store them in the Sales_item class
    std::cout << itemA + itemB << std::endl; // print the sum of the two Sales_item objects


    return 0;
}