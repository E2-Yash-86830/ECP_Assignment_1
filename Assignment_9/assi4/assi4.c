#include<stdio.h>
#include"header.h"

void r_file(FILE*);
void w_file(FILE*,FILE*);
int main(int argc, char *argv[])
{
	int i;
	FILE *fr=fopen(argv[1],"r");
	FILE *fw=fopen(argv[2],"w");

	r_file(fr);
	w_file(fw,fr);
	fclose(fr);
	fclose(fw);
}
