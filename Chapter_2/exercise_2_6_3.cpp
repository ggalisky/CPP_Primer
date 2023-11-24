#include <iostream>
#include <string>
#include "custom_Sales_data.h"





int main()
{
    
    Sales_data data1, data2;

    double price = 15; // price in dollars for each book
    // code to read into data 1 and data 2
    std::cout << "Input book_data1 (book number, then units sold, then price): " << std::endl;
    std::cin >> data1.book_number >> data1.units_sold >> price; // take user input, store into data1 and price
    data1.revenue = data1.units_sold * price;

    std::cout << "Input book_data2 (book number, then units sold, then price): " << std::endl;
    std::cin >> data2.book_number >> data2.units_sold >> price; // take user input, store into data1 and price
    data1.revenue = data2.units_sold * price;

    //code to check whether data1 and data 2 have the same ISBN

    if(data1.book_number == data2.book_number)
    {
        std::cout << "book 1 and book 2 have the same ISBN" << std::endl;
        std::cout << "ISBN: " << data1.book_number << " combined units sold: " << 
        (data1.units_sold + data2.units_sold) << " combined revenue: " << (data1.revenue +data2.revenue) << std::endl;

    }
    else
    {
        std::cerr << "book 1 and book 2 do not have the same ISBN" << std::endl;
        return -1; // return non 0 exit code to indicate failure
    }




    return 0;
}