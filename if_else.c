// #include <stdio.h>
// int main ()
// {
//     int a,b;
// printf("Enter the number of A \n",a);
// scanf ("%d",&a);

// if(a>=18){
//     printf("%d is even \n",a);
// }
// else {
//     printf ("%d is odd \n",a);
// }
//     return 0;
// }
#include <stdio.h>
int main ()
{
int age;
int vippass =0;
// vippass =1;
printf("Enter your age \n");
scanf("%d",&age);

if (age<=90 && age>=18 || vippass==1){
    printf("You are above 18 and below 90,you cannot drive \n ");
}
else {
    printf("you cannot drive \n ");
}

    return 0;
}
