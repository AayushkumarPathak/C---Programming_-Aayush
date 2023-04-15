#include<stdio.h>
int main()
{
    int arr[3][3];
    int sum=0;

    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            printf("Enter the element at[%d][%d]:",r,c);
            scanf("%d",&arr[r][c]);

        }
    }

    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            printf("%d\t",arr[r][c]);

        }printf("\n");
    }
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            if(r==c){
                sum=sum+arr[r][c];
            }
        }
    }
    printf("Sum of daigonal element:%d",sum);
    

    
}