/*Write a program that takes the x – y coordinates of a point in the Cartesian plane and prints a
message telling either an axis on which the point lies or the quadrant in which it is found.
Sample lines of output:
(-1.0, -2.5) is in quadrant III
(0.0, 4.8) is on the y-axis*/
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
