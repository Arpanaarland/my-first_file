using namespace std;
#include<iostream>

class SmartPtr
{
int *ptr;
public:

explicit SmartPtr(int *p=NULL) {ptr=p;}
~SmartPtr() {delete(ptr);}
int &operator *() {return *ptr;}
};

int main()
{
SmartPtr ptr(new int());
*ptr=20;
cout<<*ptr;

}
