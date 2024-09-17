#include<stdio.h>
void r_file(FILE *fr);
{
  char ch;
  fr=fopen("file.txt","r");
  while((ch=fgetc(fr))!=EOF)
	printf("%c",ch);
}
