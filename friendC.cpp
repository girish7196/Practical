#include<iostream>
using namespace std;

class student{
private:
string name;
int marks;

public:
student(string n,int m){
name=n;
marks=m;
}

friend class result;
};

class result{
public:
void displayres(student s){
cout<<"Student Name: "<<s.name<<endl;
cout<<"Student Marks: "<<s.marks<<endl;
}
};

int main(){
student s1("Aryan", 89);
result r;
r.displayres(s1);
return 0;
}
