#include<iostream>
using namespace std;

int main()
{
int i,n,sum=0;
cout<<"Enter n: ";
cin>>n;
for(i=1; i<=n; i++)
{
sum=sum+i;
}
cout<<"The sum of "<<n<<" number is "<<sum<<endl;
return 0;
}
