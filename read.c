#include<stdio.h>
int main()
{
FILE *fp;char buf[100];
fp=fopen("data","r");
if(fp==NULL)
{
printf("file error");
return;
}
fgets(buf,100,fp);
printf("%s",buf);fclose(fp);
}
