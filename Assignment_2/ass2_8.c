#include<stdio.h>

int main(){
	int quantity;
	float unitprice = 5.0;
	float discount = 0.0;
	float price , dp;

	printf("Enter the quantity : ");
	scanf("%d",&quantity);

	price = quantity * unitprice;

	if(quantity > 50){
	discount = 0.15;

	}
	else if(quantity > 30){
	discount = 0.10;
	}

	dp = price * (1-discount);
	printf("Total price after discount: rs %.2f\n", dp);

	return 0;


}
