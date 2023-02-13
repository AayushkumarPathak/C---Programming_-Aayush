#include<stdio.h>
int main(){
	char ch;
	ch = 94;
	printf("%d",sizeof(ch));
	printf("\nSize = %d B",sizeof(ch));
	printf("\nvalue = %c",ch);
	printf("\nAddress = %d",&ch);
}
