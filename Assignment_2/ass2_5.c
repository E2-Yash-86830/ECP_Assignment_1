#include<stdio.h>

int main(){
  int n1,n2,n3,max;
  printf("Enter first number ");
  scanf("%d",&n1);

  printf("Enter second number ");
  scanf("%d",&n2);


  printf("Enter third number ");
  scanf("%d",&n3);
  // using if else
/*	  if (n1>n2){
		if(n1>n3){
		  printf("max = %d",n1);
		}
		else{
		  printf("max = %d",n3);
		}
}
	  
	  else
	  {
		if(n2>n3){
		  printf("max = %d",n2);
		}

		else{
		  printf("max = %d",n3);
		}

		//	}
		//	(n1>n2)?(printf("max = %d",n1)):(printf("max = %d",n2));
	} 
  }

  */
  //using conditional operator
	printf("max = %d ", (n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3)));

}
