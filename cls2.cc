#include<iostream>
using namespace std;
class A
{
public :
int x;
int y;
public:
A(int a,int b)
{
x=a;
y=b;
}
A()
{
x=y=0;
}
A(int i)
{
x=y=i;
}
};
class B : public A
{
public:
int z;
B(int a,int b,int c):A(a,b)
{
z=c;
}
B(int a,int b):A(a)
{
z=b;
}
B():A()
{
z=0;
}
void display()
{
cout<<"\nclass A is public "<<endl;
cout<<"\nmember x is accessible her "<<x;
cout<<"\nmember y is accessible her "<<y;
cout<<"\nmember z is accessible her "<<z<<endl;
}
};
/*class C : protected B
{
public:
C()
{
cout<<"class B is protected\n "<<endl;
cout<<"protected member x is accessible her\n "<<x;
cout<<"protected member y is accessible her\n "<<y;
cout<<"private member z is not accessible her\n ";
}
};
class D : private C
{
public:
D()
{
cout<<"class C is private"<<endl;
cout<<"private member x is accessible her\n "<<x;
cout<<"private member y is accessible her\n "<<y;
cout<<"private member z is not accessible her\n ";
}
};*/

int main()
{
B obj1(10,20,30);
obj1.display();
B obj2(5,6);
obj2.display();
B obj3;
obj3.display();
return 0;
}
