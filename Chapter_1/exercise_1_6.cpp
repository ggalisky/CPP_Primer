#include <iostream>
#include "Sales_item.h"


int main()
{
    Sales_item total; // variable to hold data for the next transaction

    if (std::cin >> total) // store user input in total
    {
        Sales_item trans; // variable to hold running sum
        while (std::cin >> trans) //
        {
            if(total.isbn() == trans.isbn())
            {
                total += trans;
            }
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;

    }
    else
    {
        std::cerr << "No Data?" << std::endl;
        return -1;
    }

    return 0;
}