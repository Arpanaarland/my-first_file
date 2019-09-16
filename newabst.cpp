using namespace std;
#include<iostream>

class Base
{
public:
virtual void show()=0;
};

class Derived : class Base { };

int main(void)
{
Derived d;
return 0;
}
