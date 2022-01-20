/*Modify your program to compute and display both the range of values in the data 
collection and the standard deviation of the data collection. To compute the standard 
deviation, accumulate the sum of the squares of the data values ( sum_squares ) in the 
main loop. After loop exit, use the formula 	standard_deviation=sqrt((sum_square/n)-(avg*avg))*/
#include<iostream>
#include<math.h>
using namespace std;
int main() 
{ 
	int min,max,i,n,sum_square=0; 
	float avg,num,sum=0,standard_deviation;
	min = INT_MAX; // INT_MAX gives maximum range of compiler//
	max = INT_MIN; // INT_MIN gives minimum range of compiler//
	 
	cout<<"How many numbers do you want to enter: "; 
	cin>>n; 
	 
	for(i=0; i<n; i++) 
	{ 
		cout<<"Number "; 
		cin>>num; 
		if(num>max)	max = num; 
		if(num<min)	min = num;
		sum=sum+num;
		sum_square=sum_square+num*num;
		
	} 
	 avg=sum/n;
	standard_deviation=sqrt((sum_square/n)-(avg*avg));
	cout<<"Smallest number"<<min<<endl;
	cout<<"largest number"<<max<<endl;
	cout<<"average of number"<<avg<<endl;
	cout<<"standard_deviation of number"<<standard_deviation;
} 
