#include<stdio.h>

int main(){
	
	int a,b;
	unsigned char a_uchar,b_uchar;
	char a_char, b_char;
	long a_long,b_long;

	printf("Testing with small values \n");
	printf("Testing with integer num : \n");

	a=20,b=10;
	printf("a : %d, b : %d\n",a ,b);
	printf("Sum: %d\n", a + b);
	printf("Difference: %d\n", a -b);
	printf("Product: %d\n", a * b);
	
	printf("\n Testing with unsigned char\n");
	a_uchar=20,b_uchar=10;
	printf("a : %d, b : %d\n",a_uchar ,b_uchar);
	printf("Sum: %d\n", a_uchar + b_uchar);
	printf("Difference: %d\n", a_uchar -b_uchar);
	printf("Product: %d\n", a_uchar * b_uchar);

	printf("\n Teting with char\n");
	a_char=20,b_char=10;
	printf("a : %d, b : %d\n",a_char ,b_char);
	printf("Sum: %d\n", a_char + b_char);
	printf("Difference: %d\n", a_char -b_char);
	printf("Product: %d\n", a_char * b_char);

	printf("\n Testing with long\n");
	a_long=20,b_long=10;
	printf("a : %ld, b : %ld\n",a_long ,b_long);
	printf("Sum: %ld\n", a_long + b_long);
	printf("Difference: %ld\n", a_long -b_long);
	printf("Product: %ld\n", a_long * b_long);

	printf("\n Testing with large Value\n");
	printf("Testing with integer\n");
	a = 1287465820;
	b = 128;
	printf("a : %d, b : %d\n",a ,b);
	printf("Sum: %d\n", a + b);
	printf("Difference: %d\n", a - b);
	printf("Product: %d\n", a * b);
	
	printf("\nTesting with long\n");
	a_long = 1287465820l;
	b_long = 3;
	printf("a : %ld, b : %ld\n",a_long ,b_long);
	printf("Sum: %ld\n", a_long + b_long);
	printf("Difference: %ld\n", a_long - b_long);
	printf("Product: %ld\n", a_long * b_long);

}


