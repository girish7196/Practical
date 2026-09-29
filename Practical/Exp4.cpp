#include<iostream>
using namespace std;

class Rectangle{
private:
float length;
float width;

public:
Rectangle(float len, float wid){
length=len;
width=wid;
}

~Rectangle(){
cout<<"Reactangle destroyed"<<endl;
}

float Area(){
return length*width;
}

float Perimeter(){
return 2*(length+width);
}
};

int main(){
Rectangle value(3,4);
cout<<"Length of rectangle: "<<value.dispLength()<<endl;
cout<<"Width of rectangle: "<<value.dispWidth()<<endl;
cout<<"Area of rectangle is: "<<value.Area()<<endl;
cout<<"Perimeter of rectngle is: "<<value.Perimeter()<<endl;

return 0;
}
