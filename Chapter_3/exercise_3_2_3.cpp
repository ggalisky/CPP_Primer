/*
Exercises Section 3.2.3
Exercise 3.6: Use a range for to change all the characters
in a string to X.
Exercise 3.7: What would happen if you define the loop
control variable in the previous exercise as type char?
Predict the results and then change your program to use a
char to see if you were right.
Exercise 3.8: Rewrite the program in the first exercise, first
using a while and again using a traditional for loop.
Which of the three approaches do you prefer and why?
Exercise 3.9: What does the following program do? Is it
valid? If not, why not?
string s;
cout << s[0] << endl;
Exercise 3.10: Write a program that reads a string of
characters including punctuation and writes what was read
but with the punctuation removed.
Exercise 3.11: Is the following range for legal? If so, what
is the type of c?
const string s = "Keep out!";
for (auto &c : s) { ... }
*/

#include <iostream>
#include <string>

using namespace std; using std::string;

int main()
{
    //3.6
    string cat = "cat";

    for (auto &i: cat)
    {
        i = 'x';
    }

    cout << cat << endl;

    //3.7
    // if you change auto to char things should work
    string cat2 = "cat";

    for (char &i: cat2)
    {
        i = 'x';
    }

    cout << cat2 << endl;

    //3.8
    string cat3 = "cat";
    int index = 0;
    while(index < cat3.size())
    {
        cat3[index] = 'x';
        ++ index;
    }

    cout << cat3 << endl;

    string cat4 = "cat";

    for(int index = 0; index < cat4.size(); index++)
    {
        cat4[index] = 'x';
    }
    cout << cat4 << endl;

    //I perfer the the for range approach since it looks the cleanest

    //3.9 The program is not valid since s is empty. This is undefined behavior

    //3.10

    string input;
    string output;

    cout << "provide input with punct";

    cin >> input;

    for (auto &item: input)
    {
        if (!ispunct(item))
        {

            output += item;
        }
    }

    cout << "punct stripped from output: " << output << endl;

    //3.11 The range is legal, c is type const char reference (const char &)

    return 0;
    
}