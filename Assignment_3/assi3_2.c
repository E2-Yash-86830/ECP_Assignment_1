#include<stdio.h>

int main(){
  int num;
  int i = 1;
  printf("Enter the number : ");
  scanf("%d",&num);

  while(i<=10){

	printf("%d X %d = %d\n",num,i, num * i);

	i++;

  }

}
