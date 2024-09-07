#include<stdio.h>

int main(){
  char op;
  int num1,num2;
  printf("Enter the operator : \n");
  scanf("%c",&op);

  printf("Enter the num1 and num2 : \n");
  scanf("%d %d",&num1, &num2);

  switch(op){

	case '+':
	  printf("The addition of %d + %d = %d ",num1, num2, num1+num2);
	  break;

	case '-':
	  printf("The subtraction of %d - %d = %d ", num1, num2, num1-num2);
	  break;

	case '*':
	  printf("The multiplication of %d * %d = %d ", num1, num2, num1 * num2);
	  break;

	case '/':
	  printf("The division of %d / %d = %d", num1, num2, num1/num2);
	  break;

	  default:
	  printf("Enter valid operator ");
  }

  return 0;

}
