#include<stdio.h>
void r_file(FILE*);
void w_file(FILE*,FILE*);

int main(){
	FILE *fr=fopen("file.txt","r");
	FILE *fw=fopen("file2.txt","w");
	r_file(fr);
	w_file(fw,fr);
	fclose(fr);
	fclose(fw);
}

