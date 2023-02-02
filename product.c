# include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the num1:");
    scanf("%d",&x);
    printf("Enter the num2:");
    scanf("%d",&y);
    int prod =  x*y;
    printf("Product of num1 & num2 is: %d\n",prod);

    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int div = a/b;
    printf("The division of a and b is: %d",div);

    return 0;
}