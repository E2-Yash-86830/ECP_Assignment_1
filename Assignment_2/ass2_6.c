#include<stdio.h>

int main(){
	int num, rev = 0,org, rem;
	printf("Enter the 5 digits number : ");
	scanf("%d",&num);
	
	org = num;

	if(num < 10000 || num > 99999){
	
		printf("Enter valid number");
	}

	else{
		
		rem = num % 10;
		rev = rev * 10 + rem;
		num/=10;

		rem = num % 10;
		rev = rev* 10 + rem;
		num/=10;

		rem = num % 10;
		rev = rev* 10 + rem;
		num/=10;

		rem = num%10;
		rev = rev* 10 + rem;
		num/=10;

		rem = num%10;
		rev = rev*10 + rem;
		num/=10;
	}

	if(org == rev){
	printf("Number is palindrome\n");
	}
	
	else{
	printf("Number is not palindrome\n");
	
	}

}
