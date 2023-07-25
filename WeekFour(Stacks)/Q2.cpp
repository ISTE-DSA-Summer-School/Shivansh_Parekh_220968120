#include<iostream>
#include<string>
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
int raintrap(int a[],int n)
{
    Stack stack; 
    int i,b;
    int w=0;
    for (i=0;i<n;i++)
    {
        

        while(!stack.isEmpty()&&a[stack.peek()]<a[i])
        {
            b=stack.pop();
            if (stack.isEmpty())
                break;
            int dist=i-stack.peek()-1;
            w=w+(min(a[stack.peek()],a[i])-a[b])*dist;
            
        }
        stack.push(i);
        
    }
    return w;

}

int main()
{
    int a[Max];
    int n,i,w=0;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    w=raintrap(a,n);
    cout<<w<<endl;
    return 0;
}