using namespace std;
#include<iostream>

template<class T,class U=char>
class A  {
public:
T x;
U y;
A() {cout<<"constructor called"<<endl; }
};

int main() {
A<char>a;
return 0;
}
