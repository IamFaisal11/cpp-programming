/*Keith’s Sheet Music needs a program to implement its music teacher’s discount policy.The
program prompts the user to enter the purchase total and indicate whether the purchaser is a teacher.
Music teachers receive a 10% discount on their sheet music purchases unless the purchase total is
$100 or higher. In that case, the discount is 12%. The discount calculation occurs before the
addition of the 5% sales tax. Here are two sample outputs —one for a teacher and one for a
nonteacher. Use necessary manipulators to format your output.

 (For Teacher)
Total purchases $122.00
Teacher's discount (12%) 14.64
Discounted total 107.36
Sales tax (5%) 5.37
Total $112.73
 (For Non-teacher)
Total purchases $ 24.90
Sales tax (5%) 1.25
Total $ 26.15*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
 float purchase,discount;
 char yn;
cout<<"Enter total purchase: ";
 cin>>purchase;
cout<<"Is customer a teacher? (Y/N) ";
 cin>>yn;
cout<<"Total purchases "<<purchase<<endl;
 if(yn=='y' || yn=='Y')
 { discount=(purchase/100)*12;
cout<<"Teacher's discount"<<discount;
 purchase = purchase * 0.88;
cout<<floor(purchase)<<endl;
 }
cout<<"Sales tax"<< purchase*0.05<<endl;
cout<<"Total "<< purchase*1.05;
 return 0;
}
