#include<iostream>
using namespace std;

class Complex{
public:
int real;
int imaginary;

Complex(){
real=0;
imaginary=0;
}
Complex(int r, int i){
real=r;
imaginary= i;
}

Complex addComplexNum(Complex C1, Complex C2){
Complex res;
res.real= C1.real + C2.real;
res.imaginary= C1.imaginary + C2.imaginary;
return res;
}
};

int main() {
Complex C1(5,6);
cout<<"Complex num 1: "<<C1.real<<"+"<<C1.imaginary<<"i"<<endl;

Complex C2(8,2);
cout<<"COmplex num 2: "<<C2.real<<"+"<<C2.imaginary<<"i"<<endl;

Complex C3;
C3 = C3.addComplexNum(C1,C2);
cout<<"Sum of Complex Num : "<<C3.real<<"+"<<C3.imaginary<<"i"<<endl;

return 0;
}
              
