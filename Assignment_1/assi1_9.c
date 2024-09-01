#include<stdio.h>
int main(){
	float Celsius, Fahrenheit;
	printf("Enter the temperature in Celsius : ");
	scanf("%f",&Celsius);
	Fahrenheit = (Celsius * 9/5) + 32;

	printf("%.2f is equal to %.2f\n", Celsius, Fahrenheit);

	printf("Enter the temperature in Fahrenheit : ");
	scanf("%f",&Fahrenheit);

	Celsius = (Fahrenheit -32) * 5/9;

	printf("%.2f is equal to %.2f\n", Fahrenheit, Celsius);




}
