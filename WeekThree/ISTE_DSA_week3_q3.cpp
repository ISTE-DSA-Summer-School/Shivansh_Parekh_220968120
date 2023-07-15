#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int *ap,*bp,*cp;
    ap=&a;
    bp=&b;
    cp=&c;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    if(*ap>*bp)
    {
        if(*ap>*cp)
        {
            cout<<"Largest= "<<*ap<<endl;
        }
        else
        {
            cout<<"Largest= "<<*cp<<endl;
        }
    }
    else
    {
        if(*bp>*cp)
        {
            cout<<"Largest= "<<*bp<<endl;
        }
        else
        {
            cout<<"Largest= "<<*cp<<endl;
        }

    }
    return 0;

}