#include<stdio.h>

int power(int base, int exp){
	int result = 1;
	for(int i = 0; i<= exp; i++){
	result *= base;
	}
	return result;
}

int main(){
	int base, exp;
	printf("Enter the base and exp : ");
	scanf("%d %d",&base, &exp);
	printf("%d %d = %d\n", base, exp, power(base, exp));
	return 0;
}
