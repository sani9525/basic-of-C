// And means represent &&
// OR means represent ||

#include <stdio.h>
int main ()
{
int a=5;
// if ((a==5) && (a%2==0))
if ((a>5) || (a%2==1))
{
printf("A \n");

}
else {
    printf("B \n");
}
    return 0;
}