#include<iostream>
using namespace std;
class A
{
public :
int x;
protected:
int y;
private:
int z;
public:
A()
{
x=10;
y=20;
z=30;
}
};
class B : public A
{
public:
B()
{
cout<<"class A is public "<<endl;
cout<<"public member x is accessible her"<<x;
cout<<"protected member y is accessible her"<<y;
cout<<"private member z is not accessible her";
}
};
class C : protected B
{
public:
C()
{
cout<<"class B is protected"<<endl;
cout<<"protected member x is accessible her"<<x;
cout<<"protected member y is accessible her"<<y;
cout<<"private member z is not accessible her";
}
};
class D : private C
{
public:
D()
{
cout<<"class C is private"<<endl;
cout<<"private member x is accessible her"<<x;
cout<<"private member y is accessible her"<<y;
cout<<"private member z is not accessible her";
}
};

int main()
{
D obj;
return 0;
}
