#include<stdio.h>

int main(){
	int a,b;
	float div;
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);

	if (b == 0)
	printf("Error");
	else{ 
	div = (float) a/b;
	printf("Division is : %.2lf ",div);
}
}
