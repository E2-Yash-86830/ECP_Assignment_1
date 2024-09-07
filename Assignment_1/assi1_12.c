#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(){
	printf("--------------------------------------------------------------------------------------\n");
	printf("Data Type                 Size                Format Specifier              Ranges\n");
	printf("--------------------------------------------------------------------------------------\n");

	printf("char                       %d                      %%c                      %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("unsigned char              %d                      %%c                      0  to %u\n", sizeof(unsigned char), UCHAR_MAX);
	printf("short int                  %d                      %%hd                     %d to %d\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
	printf("usigned int short          %d                      %%hu                     0  to %u\n", sizeof(unsigned short int), USHRT_MAX);
	printf("int                        %d                      %%d                      %d to %d\n", sizeof(int), INT_MAX, INT_MAX);
	printf("unsigned int               %d                      %%u                      0  to %u\n", sizeof(unsigned int), UINT_MAX);
	printf("long int                   %d                      %%ld                     %d to %d\n", sizeof(long int), LONG_MIN, LONG_MAX);
	printf("unsgined long int          %d                      %%lu                     0  to %u\n", sizeof(unsigned long int), ULONG_MAX);
	printf("float                      %d                      %%f                      %d to %d\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("double                     %d                      %%lf                     %d to %d\n", sizeof(double), DBL_MIN, DBL_MAX);
	printf("long double                %d                      %%Lf                     %d to %d\n", sizeof(long double), LDBL_MIN, LDBL_MAX);




}
