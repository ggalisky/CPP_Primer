/*
Exercises Section 3.3.2
Exercise 3.14: Write a program to read a sequence of
ints from cin and store those values in a vector. Exercise 3.15: Repeat the previous program but read
strings this time.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std; using std::string;

int main()
{
    //3.14
    /*
    vector<int> input_values;
    int input;

    while(cin >> input)
    {
        input_values.push_back((int)input);
        for(auto item: input_values)
        {
            cout << item << endl;
        }
    }
    */
    vector<string> input_values;
    string input;

    while(cin >> input)
    {
        input_values.push_back(input);
        for(auto item: input_values)
        {
            cout << item << endl;
        }
    }
    
    return 0;
}