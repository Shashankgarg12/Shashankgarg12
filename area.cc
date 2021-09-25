//Shashank Garg btech cs sec k 20011190
#include<iostream>
using namespace std;
void area(float r);
void area(int a,int b);
void area(int c);
int main()
{
int a,b,c;
float r;
cout<<"Enter the radius:-->   ";
cin>>r;
area(r);
cout<<"\nEnter the length:-->   ";
cin>>a;
cout<<"Enter the breadth:-->   ";
cin>>b;
area(a,b);
cout<<"\nEnter the side of square:-->   ";
cin>>c;
area(c);
}
void area(float r)
{
cout<<"area of circle   --->  "<<2*3.14*r*r;
}
void area(int a,int b)
{
cout<<"area of rectangle   --->  "<<a*b;
}
void area(int c)
{
cout<<"area of square   --->  "<<c*c<<"\n";
}  
