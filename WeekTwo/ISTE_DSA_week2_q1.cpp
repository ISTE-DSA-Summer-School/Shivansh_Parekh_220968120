#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    string s2;
    string sub;
    int c,n;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<endl<<"Enter second string: ";
    getline(cin,s2);
    c=s1.compare(s2);
    if (c>0)
    {
        cout<<"string 1 is greater than string 2."<<endl;
    }
    else if(c==0)
    {
        cout<<"string 1 is equal to string 2."<<endl;
    }
    else
    {
        cout<<"String 1 is less than string 2"<<endl;;
    }
    cout<<"string1+string2: "<< s1.append(s2)<<endl;;

    cout<<"Enter substring to find in string 1: "<<endl;
    getline(cin,sub);
    cout<<s1.find(sub)<<endl;

    cout<<"Enter substring to insert in string 1: "<<endl;
    getline(cin,sub);
    cout<<"Enter index to be inserted at: "<<endl;
    cin>>n;
    s1.insert(n,sub);
    cout<<s1<<endl;
    
    cout<<"Length of string 2: "<<s2.length()<<endl;
    return 0;


}