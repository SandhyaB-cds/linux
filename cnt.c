#include<stdio.h>
int main()
{
FILE *fp1,*fp2;char ch;
fp1=fopen("abfile","r");
if (fp1==NULL)
{
printf("file error");
return;
}
fp2=fopen("file","w");

do
{
	ch=fgetc(fp1);
	if(ch==EOF){
	break;
	}
	  fputc(ch,fp2);
}while(ch!=EOF);
printf("file copied");
fclose(fp1);
fclose(fp2);
}
