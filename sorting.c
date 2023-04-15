#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }

    //bubble sort
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-1;k++){
            int temp = arr[k];
            if(arr[k]>arr[k+1]){
                arr[k]=arr[k+1];
                arr[k+1]=temp;

            }
        }
    }

    //printing the array
    printf("Array in sorted order:");
    for(int p=0;p<n;p++){
        printf("%d  ",arr[p]);
    }
}