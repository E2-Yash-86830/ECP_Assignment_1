#include<stdio.h>
void w_file(FILE *fw, FILE *fr)
{
  char ch;
  fw = fopen("file2.txt","w");
  while((ch=fegtc(fr))!=EOF)
	fputc(ch,fw);
}
