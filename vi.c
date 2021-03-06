#include<stdio.h>
int main()
{
FILE *fp;char c;int i;
fp=fopen("abfile","r");
if(fp==NULL)
{
printf("file error");
return;
}
for(i=1;i<=5;i++)
{
fseek(fp,-(i),SEEK_END);
c=fgetc(fp);
printf("%c",c);
}
fclose(fp);
}
