#include<stdio.h>
void print_char(char ch, int times){
	for (int i = 0; i < times; i++){
		printf("%c ",ch);

	}
	printf("\n");
}

int main(){
	char ch;
	int times;
	
	printf("Enter a character and number of times to print: ");
	scanf("%c %d",&ch, &times);

	print_char(ch, times);
	return 0;
}
