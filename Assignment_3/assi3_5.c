#include<stdio.h>

int main(){
	int num = 5;
	int fac = 1;
	int i = 1;

	while(i<=num){

	fac *= i;
	i++;
	}
	
	printf("1 * 2 * 3 * 4 * 5 = %d\n",fac);
}
