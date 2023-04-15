#include<stdio.h>
int main() //Binary Search
{
    int n;
    printf("Enter the size:");
    scanf("%d",&n);

    int ar[n];
    for(int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&ar[i]);
    }
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-1;k++){
            int temp = ar[k];
            if(ar[k]>ar[k+1]){
                ar[k]=ar[k+1];
                ar[k+1]=temp;

            }
        }
    }
    
    int val;
    printf("Enter the value:");
    scanf("%d",&val);

    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(val==ar[mid]){
            printf("Found");
            break;
        }
        else if(val<ar[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }

}