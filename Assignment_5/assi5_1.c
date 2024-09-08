#include<stdio.h>

int main(){
  int marks[5];
  int total = 0;
  float average;

  for(int i = 0; i < 5; i++){
	printf("Enter marks for subject %d: ",i + 1);
	scanf("%d",&marks[i]);
  }

  for(int i = 0; i < 5; i++){
	total += marks[i];
  }

  average = total / 5.0;

  printf("Total Marks = %d\n",total);
  printf("Average Marks = %.2f\n",average);

  return 0;
}
