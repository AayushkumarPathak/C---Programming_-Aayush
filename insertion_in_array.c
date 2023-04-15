#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d",&n);

    int ar[n];
    for(int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&ar[i]);
    }
    //insertion;
    int pos,value;
    printf("Enter the position to insert:");
    scanf("%d",&pos);

    printf("Enter the value to be inserted:");
    scanf("%d",&value);

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            // int temp = ar[j];
            ar[pos] = value;
            ar[j+1] = ar[j]; 

        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",ar[i]);
    }
}