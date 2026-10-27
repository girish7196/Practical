#include<iostream>
using namespace std;

class A{
public:
int x;
};

int main(){
A a1;
a1.x=20;
cout<<"a1's x is: "<<a1.x<<endl;

A a2(a1);
cout<<"a2's x is: "<<a2.x<<endl;

return 0;
}
