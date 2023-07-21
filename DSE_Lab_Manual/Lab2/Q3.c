#include<stdio.h>
int *square(int *p)
{
    static int sp;
    
    sp=*p**p;
    return &sp;
}
int main ()  
{  
    int a = 10;  
    int *p,*sp;  
    int **pp;   
    p = &a;
    pp = &p;  
    printf("address of a: %x\n",p);   
    printf("address of p: %x\n",pp);   
    printf("value stored at p: %d\n",*p);   
    printf("value stored at pp: %d\n",**pp);
    sp=square(p);
    printf("%d",*sp);
    return 0;
}  
