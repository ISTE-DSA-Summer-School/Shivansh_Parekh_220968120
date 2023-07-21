#include<iostream>
#include<string>
#define Max 100
using namespace std;
class Student
{
    
    string name;
    int roll_no;
    int grade;
    public:
    
    void put_details(Student s[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
        cout<<"Student "<<i+1<<":"<<endl;
        cout<<"Enter name:"<<endl;
        getline(cin>>ws,s[i].name);
        cout<<"Enter grade:"<<endl;
        cin>>s[i].grade;
        cout<<"Enter Roll no.:"<<endl;
        cin>>s[i].roll_no; 
        }        
    }
    void display(Student s[],int n)
    {
        int i;
        for(i=0;i<n;i++)
            cout<<"Name: "<<s[i].name<<" Grade: "<<s[i].grade<<" Roll No: "<<s[i].roll_no<<endl;
        
    }
    void sort(Student s[],int n)
    {
        int i,j;
        Student t;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
            if(s[j].roll_no>s[j+1].roll_no)
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
            }
        }
    }
};
int main()
{
    Student s[Max];
    int n,i;
    cout<<"Enter number of students: "<<endl;
    cin>>n;
    s[Max].put_details(s,n);
    s[Max].sort(s,n);
    s[Max].display(s,n);
    return 0;
}