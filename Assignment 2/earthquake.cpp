/*The National Earthquake Information Center has asked you to write a program implementing the
following decision table to characterize an earthquake based on its Richter scale number.
 
Could you handle this problem with a switch statement? If so, use a switch statement; if not, 
explain Why*/
#include <iostream>

using namespace std;
int main()
{
float richterNumber;
const int LITTLE_OR_NO_DAMAGE = 0;
const int SOME_DAMAGE = 1;
const int SERIOUS_DAMAGE = 2;
const int DISASTER = 3;
const int CATASTROPHE = 4;
cout<<"Enter the Richter number"<<endl;
cin>>richterNumber;
if (richterNumber < 5.0) richterNumber = LITTLE_OR_NO_DAMAGE;
if (richterNumber >= 5.0 && richterNumber < 5.5) richterNumber = SOME_DAMAGE;
if (richterNumber >= 5.5 && richterNumber < 6.5) richterNumber = SERIOUS_DAMAGE;
if (richterNumber >= 6.5 && richterNumber < 7.5) richterNumber = DISASTER;
if (richterNumber >= 7.5) richterNumber = CATASTROPHE;
switch((int)richterNumber)
{
case LITTLE_OR_NO_DAMAGE:
cout<<"Little Or No Damage"<<endl;
break;
case SOME_DAMAGE:
cout<<"Some Damage"<<endl;
break;
case SERIOUS_DAMAGE:
cout<<"Serious Damage"<<endl;
break;
case DISASTER:
cout<<"Disaster"<<endl;
break;
case CATASTROPHE:
cout<<"Catastrophe"<<endl;
break;
}
return 0;
}
