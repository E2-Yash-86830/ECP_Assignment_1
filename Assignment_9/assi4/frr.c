#include<stdio.h>

void r_file(FILE *fr)
{
  char ch;
  fr=fopen(argv[1],"r");
  while((ch = fgetc(fr))!=EOF)
	printf("%c",ch);

}
