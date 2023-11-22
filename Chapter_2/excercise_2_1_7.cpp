#include <iostream>

void do_thing( int &int_reference)
{
    int_reference = int_reference *400;

}

int main()
{
    int w = 15;
    int &h = w; // think of references like "h is a reference to w"
    h = 45;
    using namespace std;
    {
        cout << h << endl;
    }


    int jimmy = 69;
    int *pointer_jimmy = &jimmy;
    std::cout << "&jimmy: " << &jimmy << "pointer jimmy: " << pointer_jimmy << std::endl;

    int test_a = 45;
    do_thing( test_a);
    std::cout << "test_a: " << test_a << std::endl;
    return 0;
}