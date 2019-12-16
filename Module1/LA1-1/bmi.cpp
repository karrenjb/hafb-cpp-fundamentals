#include <iostream>
using namespace std;

int main ()
{
    // Calculate BMI; weight (kg)/height(m)]^2
    // Floating Point variables: float, double
    float weight=0, height=0, bmi=0;
    cout << "Welcome to the BMI Calculator" << endl;
    cout << "What is your weight in kg? " << endl;
    cin >> weight;
    cout << "What is your height in m? " << endl;
    cin >> height;
    // calculate BMI
    bmi = weight/(height*height);
    cout << "Your BMI is: " << bmi << endl;
    return 0;
}