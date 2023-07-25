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
            cout<<"Stack Underflow!"<<endl;
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
string reverse(string s)
{
    Stack stack;
    int i;
    int n=s.length();
    for(i=0;i<n;i++)
    {
        stack.push(s[i]);
    }
    s.clear();
    for(i=0;i<n;i++)
    {
        s+=stack.pop();
    }
    return s;
}
int main()
{
    string s,b;
    cout<<"Enter string:"<<endl;
    getline(cin,s);
    s=reverse(s);
    cout<<s;
    return 0;
}