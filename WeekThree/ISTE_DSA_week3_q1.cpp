#include<iostream>
using namespace std;

void swap_1(int *a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void swap_2(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}

int main()
{
    int a,b;
    int* ap=&a;
    int* bp=&b;
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;
    swap_1(ap,bp);
    cout<<*ap<<" "<<*bp<<endl;
    swap_2(*ap,*bp);
    cout<<*ap<<" "<<*bp<<endl;
    return 0;

}