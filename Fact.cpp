#include<iostream>
using namespace std;

int main()
{
int i, n, fact=1;
cout<<"Enter value of n: ";
cin>>n;
if(n<0)
{
cout<<"Factorial of negative number is not possible\n";
}
else{
for(i=1; i<=n; i++)
{
fact=fact*i;
}
cout<<"Fatorial of "<<n<<" is "<<fact<<endl;
}
return 0;
}
