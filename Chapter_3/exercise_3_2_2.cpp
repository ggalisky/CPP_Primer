#include <iostream>
#include <string>

using namespace std; using std::string;

/*
Exercises Section 3.2.2

Exercise 3.2: Write a program to read the standard input a
line at a time. Modify your program to read a word at a time.

Exercise 3.3: Explain how whitespace characters are
handled in the string input operator and in the getline
function.

Exercise 3.4: Write a program to read two strings and
report whether the strings are equal. If not, report which
of the two is larger. Now, change the program to report
whether the strings have the same length, and if not,
report which is longer.

Exercise 3.5: Write a program to read strings from the
standard input, concatenating what is read into one large
string. Print the concatenated string. Next, change the
program to separate adjacent input strings by a space.

*/

int main()
{
    //3.2
    string line;
    
    /*
    while(getline(cin,line)) // reads the standard input one line at a time
    {
        cout << line << endl;
    }
    */
    string word;
    /*
    while(cin >> word) // reads the standard input one word at a time
    {
        cout << word << endl;
    
    }
    */

    //3.3

    /*
    white space characters are ignored by the string input operator, but are included in the getline function
    */

    //3.4

    /*

    string A;
    string B;

    cout << "Enter string A: " << endl;
    cin >> A;
    cout << "Enter string B: " << endl;
    cin >> B;
    
    if (A == B)
    {
        cout << "A and B are equal!" << endl;
    }
    else if(A < B)
    {
        cout << "A is less than B!" << endl;
    }
    else
    {
        cout << "B is less than A!" << endl;
    }
    
    auto A_len = A.size();
    auto B_len = B.size();

    if (A_len == B_len)
    {
        cout << "A and B are the same length!" << endl;
    }
    else if (A_len < B_len)
    {
        cout << "A is shorter than B!" << endl;
    }
    else
    {
        cout << "B is shorter than A!" << endl;
    }
    */

    string user_input;
    string total_input;

    while(true)
    {
        cout << "Type in a string: " << endl;
        cin >> user_input; // get user input, store it in user_input

        total_input = total_input + " " + user_input;
        cout << "total input: " << total_input << endl;

    }
    




   

    
    return 0;
}