#include <iostream>

int main()
{
    //Exercise 2.18: Write code to change the value of a pointer.
    //Write code to change the value to which the pointer points.

    int *pointer = 0;
    int w = 45;
    pointer = &w; //set pointer to the address of w

    *pointer = 300; //the dereference of pointer is equal to 300. The dereference of pointer is w, so w = 300
    std::cout << "value of w after editing it via the pointer: " << w << std::endl;    

    /*Exercise 2.19: Explain the key differences between
    pointers and references.*/

    /*
    Pointers are objects and references are not
    pointers hold a memory address, references only serve as another name for an object
    references cannot be reassigned after they are assigned
    Pointers can be set to point at new/different places in memory than the the place they are set initially
    performing operations on a pointer only results in the pointer being edited, while performing operations on a reference results in those operations being applied to the
    object that the reference is referencing. You can edit the object that the pointer is pointing towards by editing the dereferenced pointer*/

    
    //Exercise 2.20: What does the following program do?
    int i = 42; // assigns 42 to i
    int *p1 = &i; //creates pointer p1 that has the address of i
    *p1 = *p1 * *p1; // dereference of p1 (i) = dereference of p1 (i) * dereference of p1 (i)
    
    //This program will multiple I times itself. Lets prove it
    std::cout << "i value: " << i << std::endl;

    /*
    Exercise 2.21: Explain each of the following definitions.
    Indicate whether any are illegal and, if so, why.
    int i = 0; // legal, 0 is an int
    (a) double* dp = &i; //wrong syntax double* doesn't mean anything
    (b) int *ip = i; // illegal, i is not an address
    (c) int *p = &i; // good, pointer p is assigned to the address of i

        */

       /*Exercise 2.22: Assuming p is a pointer to int, explain the
following code:
if (p) // ... should evaluate to true, since p isn't set to nullptr
if (*p) // ... if (the int that p is pointing towards)
*/
    int h = 12;
    int *p = &h;
    int &cat = h;
    *p = 15;
    if (p)
    {
        std::cout <<"TRUE" << std::endl;
    }
    else
    {
        std::cout << "FALSE" << std::endl;
    }


    return 0;
}