#include<stdio.h>
int main(){
	int num = 5;
	int fact = 1;

	while(num > 1){
	fact *= num;
	num--;
	}
	printf("5 * 4 * 3 * 2 * 1 = %d\n",fact);
}
