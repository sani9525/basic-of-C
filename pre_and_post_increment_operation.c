#include <stdio.h>
int main ()
{
int a=4;
int b=6;
int c,d;
printf ("the value of a is %d \n",a);
printf ("the value of b is %d \n",b);
c=++a; // c=6,a=6
d=b++; // d=10, b=11
 
 printf("\n The value of a ,b,c and d is %d,%d,%d %d \n",a,b,c,d);

    return 0;
}