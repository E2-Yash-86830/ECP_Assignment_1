#include<stdio.h>
#include<limits.h>

int main()
{
	printf("---------------------------------------------------------------------------------------\n");
	printf("Data type                  Size                   Format Specifier            Range\n");
	printf("---------------------------------------------------------------------------------------\n");
	
	printf("char                        %d                           %%c               %d to %d\n",  sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("unsigned char               %d                           %%c               0  to %u\n",  sizeof(unsigned char), UCHAR_MAX);
	printf("short int                   %d                           %%hd              %d to %d\n",  sizeof(short int), SHRT_MIN, SHRT_MAX);
	printf("unsigned short int          %d                           %%hu              %0 to %u\n",  sizeof(unsigned short int), USHRT_MAX);
	printf("int                         %d                           %%d               %d to %d\n",  sizeof(int), INT_MIN, INT_MAX);
	printf("unsigned int                %d                           %%u               %0 to %u\n",  sizeof(unsigned int), UINT_MAX);
	printf("long int                    %d                           %%ld              %d to %d\n",  sizeof(long int), LONG_MIN, LONG_MAX);
	printf("unsigned long int           %d                           %%lu              0  to %lu\n", sizeof(unsigned long int),ULONG_MAX);

	return 0;

}

