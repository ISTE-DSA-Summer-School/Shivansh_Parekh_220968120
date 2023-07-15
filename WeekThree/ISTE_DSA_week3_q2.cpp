#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int *ap,*bp;
    cout<<"Enter two integers:"<<endl;
    cin>>a>>b;
    ap=&a;
    bp=&b;
    *ap=*ap+*bp;
    *bp=*ap-*bp;
    *ap=*ap-*bp;
    cout<<"a= "<<*ap<<" b= "<<*bp<<endl;
    
    return 0;
}