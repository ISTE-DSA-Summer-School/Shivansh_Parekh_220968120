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
bool isValid(string s)
{
    Stack stack;
    int i;
    for(i=0;i<s.length();i++)
    {
        if (s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            stack.push(s[i]);
        }
        else if (s[i]==')')
        {
            if(stack.peek()=='(')
            {
                stack.pop();
            }
            else
                return stack.isEmpty();
        }
        else if (s[i]=='}')
        {
            if(stack.peek()=='{')
            {
                stack.pop();
            }
            else
                return stack.isEmpty();
        }
        else if (s[i]==']')
        {
            if(stack.peek()=='[')
            {
                stack.pop();
            }
            else
                return stack.isEmpty();
        }
    }
        return stack.isEmpty();
}
int main()
{
    string s;
    bool b;
    cout<<"Enter string:"<<endl;
    getline(cin,s);
    b=isValid(s);
    if(b==0)
    {
        cout<<"False"<<endl;
    }
    else
    {
        cout<<"True"<<endl;
    }
    return 0;
}