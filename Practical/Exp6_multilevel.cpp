//Multilevel Inheritance

#include<iostream>
using namespace std;

class Student{
int roll_no;
char name[30];

public:
void getData(){
cout<<"Enter Roll no: ";
cin>>roll_no;
cout<<"Enter Student name: ";
cin>>name;
}

void showData(){
cout<<"--Student Details--"<<endl;
cout<<"Roll no: "<<roll_no<<endl;
cout<<"Name: "<<name<<endl;
}
};

class StudentExam:public Student{
public:
int sub1,sub2,sub3,sub4,sub5;
float percent;

void inputData(){
getData();
cout<<"Enter Marks for Sub1: ";
cin>>sub1;
cout<<"Enter Marks for Sub2: ";
cin>>sub2;
cout<<"Enter Marks for Sub3: ";
cin>>sub3;
cout<<"Enter Marks for Sub4: ";
cin>>sub4;
cout<<"Enter Marks for Sub5: ";
cin>>sub5;
}

void displayData(){
showData();
cout<<"Marks of Sub1: "<<sub1<<endl;
cout<<"Marks of Sub2: "<<sub2<<endl;
cout<<"Marks of Sub3: "<<sub3<<endl;
cout<<"Marks of Sub4: "<<sub4<<endl;
cout<<"Marks of Sub5: "<<sub5<<endl;
}
};

class Result:public StudentExam{
public:
void calculate(){
percent=(sub1+sub2+sub3+sub4+sub5)/5;
cout<<"Total Percentage: "<<percent<<endl;
}
};

int main(){
Result res;
int count, i;
cout<<"no. of students: ";
cin>>count;

for(i=0; i<count; i++){
res.inputData();
res.displayData();
res.calculate();
}
return 0;
}
