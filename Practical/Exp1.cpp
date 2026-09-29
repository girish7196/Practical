#include<iostream>
using namespace std;

class Student{
private:
string name;
int roll_no;
float marks;

public:
void inputDetails(){
cout<<"Enter Student name";
cin>>name;

cout<<"Enter Student Roll num";
cin>>roll_no;

cout<<"Enter Student marks";
cin>>marks;
}
void displayDetails(){
cout<<"Student name: "<<name<<endl;
cout<<"Student Roll num: "<<roll_no<<endl;
cout<<"Student marks: "<<marks<<endl;
}
};
int main()
{
Student s;
s.inputDetails();

cout<<"\nStudent Details\n";
s.displayDetails();
return 0;
}
