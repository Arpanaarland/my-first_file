using namespace std;
#include<iostream>
int main()
{
int x,y;

int* ptr=&x;

*ptr=7;
ptr=&y;

return 0;
}
