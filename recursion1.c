#include<stdio.h>
void a(int n)
{
if(n>0)
{
printf("%d\n",n);
a(n-1);
printf("%d\n",n);
}
}
int main()
{
a(4);
}
 
