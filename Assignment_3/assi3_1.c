#include<stdio.h>
int main(){
	char ch;
	int num;
	printf("Enter the character : ");
	scanf("%c",&ch);

	printf("Enter the number : ");
	scanf("%d",&num);
	
	int count = 0;

	while(count < num){
	printf("%c",ch);
	count++;
	}

	printf("\n");

	return 0;


}
