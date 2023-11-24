#include <iostream>


int main()
{
    /*
    Exercise 2.36: In the following code, determine the type of each variable and the value each variable has when the code finishes:
   int a = 3, b = 4;
   decltype(a) c = a; // c is type int. c = 3
   decltype((b)) d = a; //d is type int reference because of the parentheses d = 3
   ++c; c = 4
    ++d;  d = 4

    */
    //
    auto cat = 4.5;

    decltype(cat) cat2 = 500;

    std::cout << cat2 << std::endl;

    /*
    Exercise 2.37: Assignment is an example of an expression that yields a reference type. The type is a reference to the type of the left-hand operand. That is, if i is an int, then the type of the expression i = x is int&. Using that knowledge, determine the type and value of each variable in this code:
   int a = 3, b = 4;
   decltype(a) c = a; // c is type int
   decltype(a = b) d = a; // d is type int& (int reference)
    */

   /*
   Exercise 2.38: Describe the differences in type deduction between decltype and auto. Give an example of an expression where auto and decltype will deduce the
     
   same type and an example where they will deduce differing types.

   auto cat = 50;
   decltype(cat) rat = 50; //same data types

   auto cat = 50;
   decltype((cat)) rat = 50; rat has type int& NOT type int

   It might be worth stressing the difference between auto and decltype: auto works on types, and decltype works on expressions.

You shouldn't be seeing or using decltype in "day-to-day" programming. 
It is most useful in generic (templated) library code, where the expression 
in question is not known and depends on a parameter. (By contrast, auto may 
be used generously all over the place.) In short, if you're new to programming,
 you probably won't need to use decltype for some time.

https://stackoverflow.com/questions/18815221/what-is-decltype-and-how-is-it-used

   */
    




    return 0;

}