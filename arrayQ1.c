#include<stdio.h>
int main()
{
    int arr[5]; //initialzing
    for(int i=0;i<5;i++) //Taking input
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<5;j++)
    {
        //even number
        if(j%2==0){
            printf("\neven Number:%d\n",arr[j]);
        }
        

    }
    for(int k=0;k<5;k++){
        //odd number
        if(k%2!=0){
            printf("\nodd Number:%d\n",arr[k]);
        }
    }
    int sum=0; //temp value
    for(int s=0;s<5;s++){
        sum=sum+arr[s];
        

    }
    printf("The sum of all the elements:%d",sum);
}