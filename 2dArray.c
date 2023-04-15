//sum of two arrays
#include<stdio.h>
int main(){
    int arr1[3][3] , arr2[3][3], arr3[3][3]; //declaration
    
    for(int r=0;r<3;r++){ //taking input from user;
        for(int c=0;c<3;c++){
            printf("Array1[%d][%d]:",r,c);
            scanf("%d",&arr1[r][c]);

        }

    }
   for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
           printf("Array2[%d][%d]:",r,c);
           scanf("%d",&arr2[r][c]);

        }

    }
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            arr3[r][c] = arr1[r][c]+arr2[r][c];
            printf("%d\t",arr3[r][c]);
        }
        printf("\n");

    }
    
}