#include<stdio.h>
void binary_num(int,int);

int main()
{
  int num,mask=0x80;
  printf("Enter a decimal number: ");
  scanf("%d",&num);

  binary_num(num,mask);
  return 0;
}

void binary_num(int num,int mask)
{
  printf("Binary of %d: ",num);
  while(mask!=0)
  {
     if(num & mask)
	    printf("1");
	 else
	    printf("0");
	mask=mask>>1;
  }
  printf("\n");
}
