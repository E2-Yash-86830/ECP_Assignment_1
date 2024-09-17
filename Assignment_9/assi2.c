#include<stdio.h>

void r_file(FILE*);
void w_file(FILE *fw,FILE *fr);

int main(){
FILE *fr=fopen("file.txt","r");
FILE *fw=fopen("file2.txt","w+");

r_file(fr);
w_file(fw,fr);
fclose(fr);
fclose(fw);
}

void r_file(FILE *fr)
{
	char ch;
	fr=fopen("file.txt","r");
	while((ch=fgetc(fr))!=EOF)
		printf("%c",ch);
}

void w_file(FILE *fw, FILE *fr)
{
	char ch;
	fw = fopen("file2.txt","w");
	while((ch=fgetc(fr))!=EOF)
	fputc(ch,fw);
}
