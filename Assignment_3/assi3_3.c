#include<stdio.h>

int main(){
	int sum = 0,num;
	printf("Enter the number : ");
	scanf("%d",&num);

	while(num !=0){

	sum += num%10;
	num = num/10;
	}
	printf("The sum of the number is : %d",sum);
}
