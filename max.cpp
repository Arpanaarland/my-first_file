using namespace std;
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int minimum(int,int,int);

int main()
{
int a,b,c;
cout<< "Enter three integers:";
cin>>a>>b>>c;

cout << "Minimum is:" <<minimum (a,b,c) <<endl;

return 0;
}

int minimum(int x,int y,int z)
{

if(x<y?(x<z?"x":"z"):"z")
{
cout<< "Min is:"<<x;
}
else if(y<x?(y<z?"y":"z"):"z")
{
cout<< "Min is:"<<y;
}

else cout<< "Min is:"<<z <<endl;
return 0;
}
