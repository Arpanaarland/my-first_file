using namespace std;
#include<iostream>

class employee
{
int emno;
char name[20];
float bs;
float hra;
float sales;
float ctc;

public:
void getdetails();
void findnetsal();
void showempdetails();

};

void employee:: getdetails()
{
cout<< "\n enter emp no:";
cin>>emno;
cout<< "\n enter emp name:";
cin>>name;
cout<< "\n enter emp basic salary:";
cin>>bs;
cout<<"\n enter sales:";
cin>> sales;
}

void employee::findnetsal()
{
ctc=0;
hra=0.3*bs;
if((bs+hra)>500000) ctc=ctc+100000;
if(sales>2000000) ctc=ctc+(0.1*sales);
ctc=ctc+bs+hra;
}

void employee:: showempdetails()
{
cout<<"\nEmp name:"<<name;
cout<<"\nEmp no.:"<<emno;
cout<<"\nbs:"<<bs;
cout<<"\nhra:"<<hra;
cout<<"\nsales:"<<sales;
cout<<"\nctc:"<<ctc;

}

int main()
{
int i,n;
cout<<"\n Enter no of employees";
cin>>n;
employee e[n];

for(i=0;i<n;i++)
{
e[i].getdetails();
e[i].findnetsal();
e[i].showempdetails();
}
return 0;
}


