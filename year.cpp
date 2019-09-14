#include<iostream>
using namespace std;
class date
{
int month,day,year;
public:
date(int=1,int=1,int=1990);
void print();
};

date::date(int m,int d,int y)
{
month=m;
day=d;
year=y;
}

void date::print()
{
cout<<day<<"-"<<month<<"-"<<year<<endl;
}

int main()
{
date date1(7,4,1993),date2;
cout<<"DATE1:";
date1.print();
cout<<"DATE2 :";
date2.print();
date2=date1;
cout<<"DATE2 after copy:";
date2.print();
}
