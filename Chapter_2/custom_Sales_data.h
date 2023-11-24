#ifndef CUSTOM_SALES_DATA_H //Preprocessor variables including this (header guard)
                            //should be unique and in all caps (style choice)
#define CUSTOM_SALES_DATA_H 

/*

#define cat - this is a preprocessor variable
#ifdef XYZ- returns true if the preprocessor variable, in this case, XYZ is defined
#ifndef - returns false

so

#ifndef CUSTOM_SALES_DATA_H - if CUSTOM_SALES_DATA_H has not been defined, then

everything up to the #endif will be included. 

if CUSTOM_SALES_DATA_H is already defined, then we won't include any of the code 
all the way down to the #endif. This is important because it prevents developers
from including the same header code multiple times, which would break everything :(

*/

#include <string>

struct Sales_data{ // structs are classes that by default have all data public. 
//Classes by default have all data private
    std::string book_number; // a data member
    unsigned units_sold = 0; // unsigned == unsigned int also data member
    double revenue = 0.0; // data member
};

#endif