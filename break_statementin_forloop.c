#include <stdio.h>
int main ()
{
int a=0;
for(a=0; a<10; a++)
{
    if (a>5)
    {
        break;
    }
    printf("%d",a);
}
    return 0;
}