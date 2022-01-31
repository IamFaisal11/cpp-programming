#include<iostream>
using namespace std;
int main()
{
   float X,Y;
  cout<<"Enter X & Y co-ordinates of a point: ";
 cin>>X>>Y;
    if(X==0 && Y==0)
       cout<<"Point lies on Origin";
    else if(X==0 && (Y>0 || Y<0))
         cout<<"Point lies on Y-Axis";
    else if(Y==0 && (X>0 || X<0))
       cout<<"Point lies on X-Axis";
    else if(X>0 && Y>0)
         cout<<"Point lies in 1st quadrant";
    else if(X>0 && Y<0)
       cout<<"Point lies in 4th quadrant";
    else if(X<0 && Y>0)
      cout<<"Point lies in 2nd quadrant";
    else if(X<0 && Y<0)
       cout<<"Point lies in 3rd quadrant";
}
