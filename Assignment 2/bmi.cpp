#include <iostream>
using namespace std;

int main(){
    double height, weightPound, bmi;
    cout<<"Enter Your Height in Inches  ";
    cin>>heightInch;
    cout<<"Enter Your Weight in Pounds  ";
    cin>>weightPound;

    bmi = (weightPound / (height*height)) * 703;

    if(bmi >= 30.0)
        cout<<"Your BMI is "<<bmi<<"\nYou are Obese"<<endl;
    else if(bmi >= 25.0 && bmi < 30.0)
        cout<<"Your BMI is "<<bmi<<"\nYou are Overweight"<<endl;
    else if(bmi >= 18.5 && bmi < 25.0)
        cout<<"Your BMI is "<<bmi<<"\nYou are Normal"<<endl;
    else
        cout<<"Your BMI is "<<bmi<<"\nYou are Underweight"<<endl;

    return 0;
}

