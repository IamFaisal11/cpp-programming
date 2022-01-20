/*Write a program to process a collection of daily high temperatures. Your program should 
count and print the number of hot days (high temperature 85 or higher), the number of 
pleasant days (high temperature 60–84),and the number of cold days (high temperatures 
less than 60). It shouldalso display the category of each temperature. Test your program 
on the following data:
55 62 68 74 59 45 41 58 60 67 65 78 82 88 91
92 90 93 87 80 78 79 72 68 61 59*/
//Modified program to display the average temperature (a real number) at the end of 
//the run

#include<iostream>

using namespace std;


int main()
{         
  int n,i,hot,pleasant,cold;
    float temp,sum = 0;
    hot=cold=pleasant=0;
  cout<<"enter the number of days";
  cin>>n;
cout<<"enter the temperature"<<endl;

 
  for( i = 0;i<n;i++)
  {
    cin>>temp;
    if(temp>=85)
    hot=hot+1;
    else if(temp>=60&&temp<85)
    pleasant = pleasant+ 1;
    else
    cold=cold+1;
    sum= sum+temp;
  }
  cout<<"pleasant days:"<<pleasant<<endl;
  cout<<"hot days:"<<hot<<endl;
  cout<<"cold days:"<<cold<<endl;
  cout<<"the avg temp is:"<<sum/n<<endl;
}
