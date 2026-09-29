#include<iostream>
using namespace std;

class Person{
public:
Person(){
cout<<"This is a person"<<endl;
}
};

class Teacher: public Person{
public:
Teacher(){
cout<<"This person is a teacher"<<endl;
}
};

class Student: public Person{
public:
Student(){
cout<<"This person is a Student"<<endl;
}
};

class Police: public Teacher, Student{
public:
Police(){
cout<<"This person is neither a Teacher nor a student, this person is a police officer"<<endl;
}
};

int main(){
Police P;
return 0;
} 
