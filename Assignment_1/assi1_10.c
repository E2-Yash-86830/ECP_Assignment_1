#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,s,perimeter,area;
	printf("Enter the three values for traingle sides : \n");

	scanf("%f%f%f",&a,&b,&c);
	perimeter = a+b+c;
	s = perimeter/2;

	area = sqrt(s*(s-a)*(s-b)*(s-c));

	printf("Perimeter of triangle : %.2f\n ", perimeter);
	printf("Area of triangle : %.2f\n ", area);

}
