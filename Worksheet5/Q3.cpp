#include<iostream>
#define max 100
using namespace std;
class Queue
{
    int front;
    int back;
    int a[max];
    public:
    Queue()
    {
        front=-1;
        back=-1;
    }
    void push(int x)
    {
        if(back == max-1)
        {
            cout<<"queue Overflow"<<endl;
            return;
        } 
        if(front==-1)
        {
           front++;
        }
        back++;
        a[back]=x;
        
    } 
    int pop()
    {
        if(front==-1||front>back)
        {
            cout<<"queue underflow"<<endl;
            return -1;
        }
        int k=a[front];
        front++;
        return k;
        
    }
    int peek()
    {
        if(front==-1||front>back)
        {
            cout<<"queue underflow"<<endl;
            return -1;
        }
        return a[front];
    }
    bool empty()
    {
        if(front==-1||front>back)
        {
            return true;
        }
        return false;
    }
    void display()
    {
        int i;
        for(i=front;i<=back;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};
bool inQueue(Queue q,int x)
{
    if(q.empty())
    {
        cout<<"queue is empty"<<endl;
        return false;
    }

    int k=1,n;
    int i=q.peek();
    do
    {
        if(x==q.peek())
            k=0;
        n=q.pop();    
        q.push(n);
    }while(q.peek()!=i);
    if(k==0)
        return true;
    return false;
}
int main()
{
     Queue q;
    int ch,x,n;
    bool b;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Exit"<<endl;
    do 
    {
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1: cout<<"Enter element to push: "<<endl;
            cin>>x;
            q.push(x);
            break;
            case 2: q.pop();
            break;
            case 3: q.display();
            break;
            case 4: cout<<"Exit"<<endl;
            break;
            default: cout<<"Invalid choice"<<endl;
        }
    } while(ch!=4);
    cout<<"Enter element to be found: ";
    cin>>n;
    b=inQueue(q,n);
    if(b==1)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    return 0;
}