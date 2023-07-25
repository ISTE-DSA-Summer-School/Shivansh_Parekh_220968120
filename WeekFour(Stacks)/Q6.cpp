#include<iostream>
#define Max 100
using namespace std;
class Stack
{
    public:
    int top;
    int st[Max];
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
    void push(int n)
    {
        if(top==Max)
        {
            cout<<"Stack Overflow!"<<endl;
        }
        else
            st[++top]=n;
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow!"<<endl;
            return 0;
        }
        else
            return st[top--];
    }
    int peek()
    {
        if (isEmpty())
        {
            cout<<"Stack Underflow!"<<endl;
            return 0;
        }
        else
            return st[top];
  
    }
    int size()
    {
        return top;
    }
    void display()
    {
        int i;
        for(i=0;i<=top;i++)
        {
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }
};
Stack del_mid(Stack s)
{
    int n=s.size();
    int i;
    int a[n/2];
    for(i=0;i<n/2;i++)
    {
        a[n/2-1-i]=s.pop();
    }
    s.pop();
    for(i=0;i<n/2;i++)
    {
        s.push(a[i]);
    }
    return s;
}
int main()
{
    Stack s;
    int n,i,a;
    cout<<"Enter size :"<<endl;
    cin>>n;
    cout<<"Enter Elements of stack: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s.push(a);
    }
    s=del_mid(s);
    s.display();
    return 0;
}