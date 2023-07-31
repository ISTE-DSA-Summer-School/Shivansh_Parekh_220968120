#include<iostream>
#define max 100
using namespace std;
class Queue
{
    int front;
    int back;
    int a[max];
    int size;
    public:
    Queue(int s)
    {
        size=s;
        front=-1;
        back=-1;
    }
    void push(int x)
    {
        if((back == max-1 && front==0)||((back+1)%size==front))
        {
            cout<<"queue Overflow"<<endl;
            return;
        }
        else if(front==-1)
        {
            front++;
            back++;
            a[back]=x;
        }
        else if(back==size-1 && front!=0)
        {
            back=0;
            a[back]=x;
        }
        else
        {
            a[++back]=x;
        }
        
    } 
    int pop()
    {
        if(front==-1)
        {
            cout<<"queue underflow"<<endl;
            return -1;
        }
        else if(front==back)
        {
            front=-1;
            back=-1;
        }
        else if(front==size-1)
        {
            front=0;
        }
        else
        {
            front++;
        }
    }
    int peek()
    {
        if(front==-1)
        {
            cout<<"queue underflow"<<endl;
            return -1;
        }
        return a[front];
    }
    bool empty()
    {
        if(front==-1)
        {
            return true;
        }
        return false;
    }
    void display()
    {
        int i;
        printf("\nElements in Circular Queue are: ");
        if (back >= front)
        {
            for (int i = front; i <= back; i++)
                printf("%d ",a[i]);
            cout<<endl;
        }
        else
        {
            for (int i = front; i < size; i++)
                printf("%d ", a[i]);
 
            for (int i = 0; i <= back; i++)
                printf("%d ", a[i]);
            cout<<endl;
        }
    }
};
int main()
{
    int n;
    cout<<"Enter size of circular queue: "<<endl;
    cin>>n;
    Queue q(n);
    int ch,x; 
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
    return 0;
}