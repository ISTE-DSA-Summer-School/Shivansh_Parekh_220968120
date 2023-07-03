#include<iostream>
using namespace std;
float calculator(int a, int b, char ch){
    if(ch=='+'){
        return a+b;
    }
    else if (ch=='-'){
        return a-b;
    }
    else if (ch=='*'){
        return a*b;
    }
    else if (ch=='/'){
        return a/float(b);
    }
    else if(ch=='%'){
        return a%b;
    }
    else
    {
        cout<<"invalid operand entered";
    }
}
int main(){
    int a,b;
    char c;
    float result;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<endl<<"Enter second number: ";
    cin>>b;
    cout<<endl<<"Enter operand: ";
    cin>>c;
    result=calculator(a,b,c);
    cout<<a<<c<<b<<'='<<result;
    return 0;

}
