#include <iostream>

int main()
{
    double jim = 2.3L;
    int test = 34;
    int test_2 = 34U;
    unsigned int test_3 = 1000;
    using namespace std;
    {
        cout << "test_2 - test_3: " << test_2 - test_3;
        
    } // namespace std
    
    std::cout << "jim: " << jim << std::endl;
    return 0;
}