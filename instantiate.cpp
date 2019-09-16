using namespace std;
#include<iostream>

class base
{
public:
virtual void show()=0;
};

class derived : public base
{
public:
void show() {cout<<"In derived \n";};
};
int main()
{
derived d;
base=*bpt;
bpt=new derived();
d.show();

return 0;
}


