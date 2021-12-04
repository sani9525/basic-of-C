#include <stdio.h>
int main ()
{
int a=5,b=10,c,d;
printf("The value of a= %d,b=%d,a,b");
c=--a;     //a=4 ,c=4     // this is a pre decrement operator 
d=b--;     // b=9,d=10    //this is a post decrement operator 
printf(" \n a=%d,c+%d,b=%d,d=%d",a,b,c,d);

    return 0;
}