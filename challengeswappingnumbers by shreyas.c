

#include <stdio.h>
int main()
{
    int a = 0,b = 0;
    printf("Enter two numbers of your choice\n");
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("Now lets swap the numbers you have given for each variable.\n");
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a:%d\nb:%d\n",a,b);
           
           


}
