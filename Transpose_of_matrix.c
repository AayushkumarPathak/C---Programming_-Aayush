#include<stdio.h>
int main()
{
    int matrix[3][4], trans[4][3];

    for(int r=0;r<3;r++){
        for(int c=0;c<4;c++){
            printf("Enter the matrix at[%d][%d]:",r,c);
            scanf("%d",&matrix[r][c]);

        }
    }

    for(int r=0;r<4;r++){
        for(int c=0;c<3;c++){
            trans[c][r] ==matrix[r][c];
            printf("\n%d\t",matrix[c][r]);
        }
        printf("\n");
    }
}