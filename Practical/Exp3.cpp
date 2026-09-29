#include<iostream>
using namespace std;

class SavingAccount{
private:
string accHolderName;
int accNumber;
double balance;
double interestRate;

public:
SavingAccount(string name, int accNum, double initialBalance, double rate){
accHolderName=name;
accNumber=accNum;
balance=initialBalance;
interestRate=rate;
}

void deposit(double amount){
if (amount>0){
balance+=amount;
cout<<"Deposited: Rs "<<amount<<endl;
}
}

void withdraw(double amount){
if(amount>0 && amount<=balance){
balance-=amount;
cout<<"Withdrawn: Rs "<<amount<<endl;
} else{
cout<<"Insufficient Balance!"<<endl;
}
}

void applyInterest(){
double interest=balance*interestRate/100;
balance+=interest;
cout<<"Interest applied: Rs "<<interest<<endl;
}

void display(){
cout<<"--[Savings Account]--"<<endl;
cout<<"Account Holder Name: "<<accHolderName<<endl;
cout<<"Account Number: "<<accNumber<<endl;
cout<<"Balance: Rs "<<balance<<endl;
cout<<"Interest Rate: "<<interestRate<<"%"<<endl;
}
};

class CheckingAccount{
private:
string accHolderName;
int accNumber;
double balance;
double transactionFee;

public:
CheckingAccount(string name, int accNum, double initialBalance, double fee){
accHolderName=name;
accNumber=accNum;
balance=initialBalance;
transactionFee=fee;
}

void deposit(double amount){
balance+=amount;
cout<<"Deposited: Rs "<<amount<<endl;
}

void withdraw(double amount){
double total=amount+transactionFee;
if(total<=balance){
balance-=total;
cout<<"Withdrawn: Rs "<<amount<<"(Rs "<<transactionFee<<"fee applied)"<<endl;
} else{
cout<<"Insufficient Balance for withdrawal + fee"<<endl;
}
}

void display(){
cout<<"--[Checking Account]--"<<endl;
cout<<"Account Holder Name: "<<accHolderName<<endl;
cout<<"Account number: "<<accNumber<<endl;
cout<<"Balance: "<<balance<<endl;
cout<<"Transaction fee: "<<transactionFee<<endl;
}
};

int main(){
SavingAccount savings("Aryan", 1001, 5000.0, 3.0);
CheckingAccount check("Bob",1002,3000, 20.0);

savings.display();
savings.deposit(1000);
savings.withdraw(1800);
savings.applyInterest();
savings.display();

check.display();
check.deposit(1600);
check.withdraw(1000);
check.display();

return 0;
}






























