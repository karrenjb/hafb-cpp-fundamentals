#include <iostream>
using namespace std;

int main()
{
    int age;    //int: signed integers
    int birthyear;
    //cout: for system output
    std::cout <<"Hello Again C++" << std::endl;
    cout <<"Another line under namespace std" << endl;
    cout <<"Wildcats "<<"WSU "<<"Ogden "<<endl;
    //cin: for system / user input
    cout << "What is your age?" <<endl;
    cin >> age;
    cout << "I see you are " << age << endl;
    //sizeof(): get the size of the variable
    cout << "Integers are: " << sizeof(int) << " bytes. " << endl;
    cout << "Min Integer Value: " << INT32_MIN <<
        "Max Integer Value: "  << INT32_MAX << "bytes. " <<endl;
        
    return 0;
}