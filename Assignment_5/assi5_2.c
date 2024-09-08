#include<stdio.h>

void accept(int arr[], int size){
	for(int i = 0; i<size; i++){
	
	printf("enter element %d: ", i+1);
	scanf("%d",&arr[i]);
	}
}

void parray(int arr[], int size){
	printf("Array elements are: ");
	for(int i = 0; i < size; i++)
	{
		printf("%d",arr[i]);
	

	}
	printf("\n");
}

int main(){
	int size;

	printf("Enter the numbers: ");
	scanf("%d",&size);

	int arr[size];
	accept(arr, size);
	parray(arr, size);

	return 0;
	


}
