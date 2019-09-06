#include<stdio.h>
int main()
{
int a[3][3],i,j;
printf("enter matrix a \n");
for (i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
for (i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==j)
{
printf("%d \n",a[i][j]);
}
}}
return 0;
}
