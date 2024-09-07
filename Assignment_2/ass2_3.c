#include<stdio.h>

int main(){
	int num;
	printf("Enter the Num : ");
	scanf("%d",&num);
	if( num > 0)
		printf("Num is +ve ");
	else if( num < 0 )
		printf("Num is -ve");
	else
		printf("Num is ZERO ");

}
