#include<iostream>
using namespace std;

class vehicle{
public:
vehicle(){
cout<<"This is a vehicle"<<endl;
}
};

class car:public vehicle{
public:
car(){
cout<<"This vehicle is a car"<<endl;
}
};

class bike: public vehicle{
public:
bike(){
cout<<"This vehicle is a bike"<<endl;
}
};

int main() {
car c;
bike b;

return 0;
}
