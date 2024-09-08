#include<stdio.h>

void print_fib(int terms)
{
	int a =0, b=1, next;
	for(int i = 0; i < terms; i++){
	printf("%d",a);
	next = a+b;
	a = b;
	b = next;
	}
	printf("\n");
}

int main(){
	int terms;
	printf("Enter the numbers of terms: ");
	scanf("%d",&terms);
	print_fib(terms);
	return 0;

}
