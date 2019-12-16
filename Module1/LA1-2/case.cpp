#include  <iostream>
using namespace std;

int main()
{
    char code;
    cout << "Enter the specification code: ";
    cin >> code;
    
    // == operator to compare values 
    // when comparing characters use single ticks ' '

    // if (code == 'S')
    // {
    //     cout << "The item is space exploration grade."<<endl;
    // }
    
    // use a switch statement
    switch (code)
    {
    case 'S':   //like an IF statement with OR case (||)
    case 's':
        cout << "The item is space exploration grade." <<endl;
        break;  //exit your switch statement
    
    case 'M':
        cout << "The item is military exploration grade." <<endl;
        break;  //exit your switch statement

    case 'C':
        cout << "The item is commercial grade. " << endl;
        break;
        
    default:    //like an ELSE statement
        cout << "The item is not supported." <<endl;
        break;  
    }

    return 0;
}