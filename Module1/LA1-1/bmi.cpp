#include <iostream>
using namespace std;

//Constants
const float kMeterToInches = 39.37;
const float kKilotoPounds = 2.204;
const int kBMIImperial = 703;
const float kLowBMILimit = 18.5;
const float kHiBMILimit = 24.9;

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
    // Calculate BMI
    bmi = weight/(height * height);
    cout << "Your BMI (metric) is: " << bmi << endl;

    //Task: Now, convert it to imperial units
    //Calculate BMI (imperial): (weight(lbs) * 703)/[height(in)]^2
    //1 meter = 39.37 inches
    //1 kg = 2.204 lbs
    weight = weight * kMeterToInches;    // convert to lbs
    height = height * kKilotoPounds;    // convert to inches
    bmi = (weight * kBMIImperial)/(height * height);
    cout << "Your BMI (imperial) is: " << bmi << endl;

    //Task: Print if they are in the "good" range; BMI in in the 18.5 to 24.9
    //&& (AND) to test two conditions
    if(bmi > kLowBMILimit && bmi < kHiBMILimit)
    {
        cout << "Your BMI " << bmi << " is good!" << endl;
    }
    else
    {
        cout << "Your BMI is " << bmi << " is bad!" << endl;
    }
    
        cout << "Thanks for using the BMI Calculator!" << endl;
             
    return 0;
}