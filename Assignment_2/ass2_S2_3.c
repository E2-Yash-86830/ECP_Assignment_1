#include<stdio.h>
int main() 
{	
	int dep_no, emp_id;
	char dc;

	printf("Enter the employee id: ");
	scanf("%d",&emp_id);

	printf("Enter the dep_no: ");
	scanf("%d",&dep_no);

	printf("Enter the desgination code: ");
	scanf("%*c%c",&dc);

	switch(dep_no)
	{
	case 10: printf("Employee with :%d working in marketing department\n",emp_id);
	break;

	case 20: printf("Employee with :%d working in management department\n",emp_id);
	break;

	case 30: printf("Employee with :%d working in Sales department\n", emp_id);
	break;

	case 40: printf("Employee with :%d working in Designing department\n", emp_id);
	break;

	default : printf("invalid department number\n");
	break;
	}

	switch (dc)
	{
	case 'M': printf("as a  manager \n");
	break;

	case 'S': printf("as a Supervisor\n");
	break;

	case 's': printf("as a  security officer\n");
	break;

	case 'C': printf("as a clerk\n");
	break;

	default : printf("Enter valid code\n");
	break;

	}
	return 0;
	
}

