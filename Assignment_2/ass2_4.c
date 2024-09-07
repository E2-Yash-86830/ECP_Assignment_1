#include<stdio.h>

int main(){
	int n1,n2,max;
	printf("Enter first number ");
	scanf("%d",&n1);

	printf("Enter second number ");
	scanf("%d",&n2);

	/* Using if else

	if (n1>n2){
	printf("max = %d",n1);
	}
	else{
	printf("max = %d",n2);
	}
	*/
	
	//Using conditional operator
	
	(n1>n2)?(printf("max = %d",n1)):(printf("max = %d",n2));
}  
