#include<iostream>
#include<string>
using namespace std;
class time
{
    public:
    int hrs;
    int min;
    int sec;
    void read()
    {
        cout<<"Enter time(hrs min sec): "<<endl;
        cin>>hrs>>min>>sec;
    }
    void display()
    {
        cout<<"Time is "<<hrs<<":"<<min<<":"<<sec<<endl;
    }
};
time Add(time t1,time t2)
{
    time sum;
    sum.hrs=t1.hrs+t2.hrs;
    sum.min=t1.min+t2.min;
    sum.sec=t1.sec+t2.sec;
    if(sum.sec>=60)
    {
        sum.min++;
        sum.sec=sum.sec-60;
    }
    if(sum.min>=60)
    {
        sum.hrs++;
        sum.min=sum.min-60;
    }
    
    return sum;
}
time Diff(time t1, time t2)
{
    time diff;
    diff.hrs=t1.hrs-t2.hrs;
    diff.min=t1.min-t2.min;
    diff.sec=t1.sec-t2.sec;
    if (diff.sec<0)
    {
        diff.min--;
        diff.sec=60+diff.sec;
    }
    if (diff.min<0)
    {
        diff.hrs--;
        diff.min=60+diff.min;
    }
    return diff;

}
int main()
{
    time t1,t2,sum,diff;
    t1.read();
    t2.read();
    sum=Add(t1,t2);
    diff=Diff(t1,t2);
    cout<<"Sum is: ";
    sum.display();
    cout<<"difference is: ";
    diff.display();
    return 0;
}