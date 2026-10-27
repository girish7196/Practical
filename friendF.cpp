#include<iostream>
using namespace std;

class box{
int len;
public:
box(int l){
len=l;
}

friend void showlen(box b);
};

void showlen(box b){
cout<<"The length of the box is "<<b.len<<endl;
}

int main(){
box b1(20);
showlen(b1);
return 0;
}