#include<stdio.h>

void w_file(FILE *fw,FILE *fr)
{
	char ch;
	fw=fopen(argv[2],"w");

	while((ch = fgetc(fr))!=EOF)
		fputc(ch,fw);
}
