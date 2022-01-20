/*Write a program that will find the smallest, largest, and average values in a collection of 
N numbers Get the value of N before scanning each value in the collection of N numbers*/
#include<iostream>
using namespace std;
int main() 
{ 
	int min,max,i,n; 
	float avg,num,sum=0;
	min = INT_MAX; 
	max = INT_MIN; 
	 
	cout<<"How many numbers do you want to enter: "; 
	cin>>n; 
	 
	for(i=0; i<n; i++) 
	{ 
		cout<<"Number "; 
		cin>>num; 
		if(num>max)	max = num; 
		if(num<min)	min = num;
		sum=sum+num;
	} 
	 avg=sum/n;
	cout<<"Smallest number"<<min<<endl;
	cout<<"largest number"<<max<<endl;
	cout<<"average of number"<<avg;
} 
