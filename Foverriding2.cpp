#include<iostream>
using namespace std;

class payment{
public:
virtual void pay(){
cout<<"Payment done by cash"<<endl;
}
};

class CreditCard:public payment{
public:
void pay() override{
cout<<"Payment made by cedit card"<<endl;
}
};

class UPIpayment:public payment{
public:
void pay() override{
cout<<"payment done by UPI"<<endl;
}
};

int main(){
CreditCard c;
c.pay();
UPIpayment u;
u.pay();
return 0;
}
