#include<stdio.h>

int main(){
	int num, i = 1;
	printf("Enter the number : ");
	scanf("%d",&num);

	while(i * i <=num){
	if (num % 1 ==0){
	printf("%d * %d = %d\n",i, num/i, num);

	}
	i++;
	}
}
