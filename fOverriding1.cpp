#include<iostream>
using namespace std;

class animal{
public:
void sound(){
cout<<"Animal makes sound"<<endl;
}
};

class dog:public animal{
public:
void sound(){
cout<<"Dog barks"<<endl;
}
};

int main(){
animal a;
dog d;
a.sound();
d.sound();
return 0;
}