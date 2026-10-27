#include<iostream>
using namespace std;

int main()
{
int a = 10;
int b = 5;
int c = a+b;

cout<<"Sum of "<<a<<" and "<<b<<" is "<<c<<endl;

c = a-b;
cout<<"Difference of "<<a<<" and "<<b<<" is "<<c<<endl;

c = a*b;
cout<<"Product of "<<a<<" and "<<b<<" is "<<c<<endl;

c = a/b;
if(b==0){
cout<<"Cannot divide by 0"<<endl;
}
else{
cout<<"Division of "<<a<<" and "<<b<<" is "<<c<<endl;
}

return 0;
}

