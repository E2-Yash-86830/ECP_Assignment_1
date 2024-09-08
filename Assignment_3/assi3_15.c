#include<stdio.h>

int main()
{

	int n1, n2 , res ;
	char op;
	typedef enum menu{EXIT,ADD,SUB,MUL,DIV}MENU;
	MENU ch;
	do
	{
		printf("Enter Number1 : ");
		scanf("%d",&n1);
	
		printf("Enter Number2: ");
		scanf("%d",&n2);

		printf("0.Exit\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division \n");
		printf("Your choice ");
		scanf("%d",&ch);
		
		switch( ch  )
		{
			case EXIT : printf("Bye Bye....\n");
						break;
			case ADD :  res = n1 + n2 ;
						printf("Add = %d \n", res);
						break;
			case SUB :  res = n1 - n2 ;
						printf("SUB = %d \n", res);
						break;

			case MUL :  res = n1 * n2 ;
						printf("MUL = %d \n", res);
						break;
			case DIV : if(n2 == 0)
						{
							printf("cant div by zero  \n");
						}
						else
						{
							res = n1 / n2;
							printf("DIV : %d \n ",res);
						}
						break;
		}

	}while(  ch != 0 );
	return 0;
}
