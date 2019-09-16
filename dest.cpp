using namespace std;
#include<iostream>
#include<cstdlib>
class base {
public:
base()
{cout <<"constructing base \n";}
virtual~base()
{cout <<"destructing base \n";}
};

class derived : public base {
public:
derived()
{cout<<"constructing derived \n";}
virtual~derived()
{cout<<"destructing derived \n";}
};

int main(void)
{

derived*d=new derived();
base*b=d;
delete b;

return 0;
}

