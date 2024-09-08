#include <stdio.h>

int factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
	fact *= i;
  }
  return fact;
}

void print_pascal(int rows) {
  for (int i = 0; i < rows; i++) {
	for (int j = 0; j <= i; j++) {
	  printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
	}
	printf("\n");
  }
}

int main() {
  int rows;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  print_pascal(rows);
  return 0;
}

