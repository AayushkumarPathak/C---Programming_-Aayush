# include <stdio.h>
int main()
{
    float l , b;
    printf("Enter the length of Rectangle:");
    scanf("%f",&l);
    printf("Enter the breadth of Rectangle:");
    scanf("%f",&b);
    float area = l*b;
    printf("Area of Rectangle is: %f",area);
    return 0;
}