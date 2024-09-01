#include<stdio.h>
int main(){
	int n1,n2,n3;
	float sum,avg;

	printf("Enter the first number : ");
	scanf("%d",&n1);

	printf("Enter the second number : ");
	scanf("%d",&n2);

	printf("Enter the third number : ");
	scanf("%d",&n3);

	sum = n1+n2+n3;

	avg = sum/3.0;

	printf("The average of %d, %d and %d is %2.f\n", n1, n2, n3, avg);

}
