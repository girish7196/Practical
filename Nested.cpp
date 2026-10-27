#include<iostream>
using namespace std;

class A{
public:
class B{
private:
int num;
public:
void get_data(int n){
num=n;
}
void put_data(){
cout<<"The number is "<<num<<endl;
}
};
};

int main(){
cout<<"Nested Class"<<endl;
A::B obj;
obj.get_data(10);
obj.put_data();
return 0;
}
