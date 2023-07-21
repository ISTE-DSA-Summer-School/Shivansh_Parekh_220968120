#include<iostream>
#include<string>
using namespace std;
class animal
{
    protected:
    string name;
    public:
    animal()
    {
        name="";
    }
    animal(string y)
    {
        name=y;
    }
    void sound()
    {
        cout<<"roar!"<<endl; 
    }
    void print_name()
    {
        cout<<name<<endl;
    }
};
class Cat:public animal
{
    public:
    Cat(string y)
    {
        name=y;
    }
    void sound()
    {
        cout<<"meow!"<<endl;
    }
};
int main()
{
    animal a("Bob");
    Cat c("Tom");
    a.sound();
    c.sound();
    a.print_name();
    c.print_name();
    return 0;
} 
