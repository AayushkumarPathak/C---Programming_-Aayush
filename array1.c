#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<10;j++){
        printf("\n arr[%d] = %d at %d",j,arr[j],&arr[j]);
    }

}