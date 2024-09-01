#include<stdio.h>
int main(){
  int num;
  int n1,n2,n3,n4;
  printf("Enter the 4 digit number : ");
  scanf("%d", &num);

  n1 = num%10;
  num	/=10;

  n2 = num%10;
  num	/=10;

  n3 = num%10;
  num	/=10;

  n4 = num%10;
  num	/=10;

  printf("a. Face values of each decimal digit:\n");
  printf("%d\t%d\t%d\t%d\t\n", n4, n3, n2, n1);

  printf("b. Place values:\n");
  printf("%d%d%d%d = %d000 + %d00 + %d0 + %d\n",n4,n3,n2,n1,n4, n3 ,n2 , n1);

  printf("c. Number in reverse order:\n");
  printf("%d%d%d%d\n", n1, n2, n3, n4);

  return 0;
}

