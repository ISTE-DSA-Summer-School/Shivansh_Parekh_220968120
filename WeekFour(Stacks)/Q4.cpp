#include<iostream>
#include<string>
#define Max 100
using namespace std;
class Stack
{
    int top;
    public:
    char st[Max];
    Stack()
    {
        top=-1;
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(top==Max)
            return true;
        else
            return false;
    }
    void push(char n)
    {
        if(top==Max)
        {
            cout<<"Stack Overflow!"<<endl;
        }
        else
            st[++top]=n;
    }
    char pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow!"<<endl;
            return 0;
        }
        else
        {
            return st[top--];
        }
    }
    char peek()
    {
        if (isEmpty())
        {
            cout<<"Stack Underflow!"<<endl;
            return 0;
        }
        else
            return st[top];
  
    }
    void display()
    {
        int i;
        for(i=top;i>=0;i--)
        {
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }
};
bool isEqual(string s1,string s2)
{
    Stack stack;
    int n1=s1.length();
    int n2=s2.length();
    int i;
    for(i=0;i<n1;i++)
    {
        if(s1[i]=='#'&& !stack.isEmpty())
        {
            stack.pop();
        }
        else if(s1[i]!='#') 
            stack.push(s1[i]);
    }
    for(i=n2-1;i>=0;i--)
    {
        if(s2[i]!='#'&& !stack.isEmpty())
        { 
            if (s2[i]==stack.peek()) 
                stack.pop();
        }
        
    }
    return stack.isEmpty();

}
int main()
{
    string s1,s2;
    bool b;
     cout<<"Enter string1:"<<endl;
    getline(cin,s1);
     cout<<"Enter string2:"<<endl;
    getline(cin,s2);
    b=isEqual(s1,s2);
    if(b==1)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    return 0;

}