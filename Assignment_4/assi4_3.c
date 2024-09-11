#include<stdio.h>

float cal(float a, float b, char op){
  switch (op){
	case '+': return a + b;
	case '-': return a - b;
	case '*': return a * b;
	case '/': return a / b;
	
  }
}
int main(){
  float a,b;
  char op;
  printf("Enter two numbers and an operator : ");
  scanf("%f %f %c", &a, &b, &op);
  if (op == '/' && b == 0){
	printf("put valid number\n");
  }
  else{
	printf("Result: %.2f\n", cal(a, b, op));
  }
  return 0;

}


