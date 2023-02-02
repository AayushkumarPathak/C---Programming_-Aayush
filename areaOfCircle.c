# include <stdio.h>
int main()
{
    float r;
    float pi = 22/7;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    float area = pi*r*r;
    printf("The area of circle is: %f",area);
    return 0;

}