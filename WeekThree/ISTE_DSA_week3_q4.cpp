#include<iostream>
using namespace std;
int main()
{
    int a,rev=0,d;
    int *ap,*rp,*dp;
    ap=&a;
    rp=&rev;
    dp=&d;
    cout<<"Enter number: "<<endl;
    cin>>a;
    while(*ap>0)
    {
        *dp=*ap%10;
        *rp=*rp*10 + *dp;
        *ap=*ap/10;
    }
    cout<<"Reversed number: "<<*rp<<endl;
    return 0;
}