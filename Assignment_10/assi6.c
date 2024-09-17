#include<stdio.h>
void swap_num(int *n1, int *n2);
int main()
{
   int n1,n2;
   printf("Enter two numbers: ");
   scanf("%d""%d",&n1,&n2);

   swap_num(&n1,&n2);
   printf("Numbers after swapping:: %d, %d",n1,n2);
   return 0;
}

void swap_num(int *n1, int *n2)
{
   *n1=*n1 ^ *n2;
   *n2=*n1 ^ *n2;
   *n1=*n1 ^ *n2;
}
