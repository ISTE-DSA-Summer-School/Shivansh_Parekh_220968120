#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n1,n2,count=0;
    string s,sub;
    cout<<"Enter string: "<<endl;
    getline(cin,s);
    cout<<"Enter substring:"<<endl;
    getline(cin,sub);
    n1=s.length();
    n2=sub.length();
    while(s.find(sub)!= string::npos)
    {
        count++;
        s.erase(s.find(sub),n2);
    }
    cout<<"No. of occurences = "<<count<<endl;
    return 0;

}