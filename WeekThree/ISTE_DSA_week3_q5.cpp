#include<iostream>
using namespace std;
int main()
{
    int a,i,k=1;
    int *ap,*kp;
    ap=&a;
    kp=&k;
    cout<<"Enter number:"<<endl;
    cin>>a;
    for(i=2;i<=*ap;i++)
    {
        *kp=*kp*i;
    }
    cout<<"Factorial = "<<*kp<<endl;
    return 0;
}