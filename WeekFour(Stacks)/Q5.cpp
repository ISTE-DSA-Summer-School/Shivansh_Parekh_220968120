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
int prec(char c)
{
    
    if (c == '*' || c == '/'||c=='%') {
        return 4;
    }
 
    if (c == '+' || c == '-') {
        return 3;
    }
    return 0;
}
string to_Postfix(string s)
{
    string p;
    Stack stack;
    int i,n;
    n=s.length();
    for(i=0;i<n;i++)
    {
        if((s[i]<='z'&& s[i]>='a')||(s[i]<='Z'&& s[i]>='A')||(s[i]>=0 && s[i]<=9))
        {
            p+=s[i];
        }
        else if(s[i]=='(')
            stack.push(s[i]);
        else if(s[i]==')')
        {
            while(!stack.isEmpty() && stack.peek()!='(')
            {
                p+=stack.pop();
            }
            if(!stack.isEmpty())
                stack.pop();
        }
        else if(s[i]=='{')
            stack.push(s[i]);
        else if(s[i]=='}')
        {
            while(!stack.isEmpty()||stack.peek()!='{')
                p+=stack.pop();
            stack.pop();
        }
        else if(s[i]=='[')
            stack.push(s[i]);
        else if(s[i]==']')
        {
            while(!stack.isEmpty()||stack.peek()!='[')
                p+=stack.pop();
            stack.pop();
        }
        else 
        {
            if(stack.isEmpty() || (prec(s[i])>prec(stack.peek())))
            {
                stack.push(s[i]);
            }
            else if(prec(s[i])<=prec(stack.peek()))
            {
                while((prec(s[i])<=prec(stack.peek())|| !stack.isEmpty()&&(stack.peek()!='('&& stack.peek()!='{'&&stack.peek()!='[')))
                {
                    p+=stack.pop();
                    cout<<p<<endl;
                }
                stack.push(s[i]);

            }
        }
    }
     while(!stack.isEmpty())
    {
        p+=stack.pop();
    }
    return p;
}
int main()
{
    string s,p;
    cout<<"Enter string:"<<endl;
    getline(cin,s);
    p=to_Postfix(s);
    cout<<p<<endl;
    return 0;
}