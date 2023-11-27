#include <iostream>
#include <string>

using namespace std; using std::string;

int main()
{
    string cat = "salem";

    int values[10] = {123,34234,12312,1231,43242,234,34,77,4354,423434};

    for (char letter: cat)
    {
        cout << letter << endl;
    }

    for (int value: values)
    {
        cout << value << endl;
    }

    for (auto value: values)
    {
        cout << value << endl;
    }
    return 0;
}