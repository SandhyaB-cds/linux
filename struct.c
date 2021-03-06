#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void read();
void write();


struct node{
int data;
char name[100];
};
struct node n1,n2,n3;
int main()
{

int ch;
while(1){
menu();
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:write();break;
case 2:read();break;
case 3:update();break;
case 4:exit(1);break;
default:printf("wrong choice");
}
}
}
void write(){
FILE *fp;
n1.data=10;
n2.data=20;
n3.data=30;
fp=fopen("nfil","wb");
strcpy(n1.name,"sandhya");

strcpy(n2.name,"sandy");

strcpy(n3.name,"sanju");
fwrite(&n1,sizeof(n1),1,fp);
fwrite(&n2,sizeof(n2),1,fp);
fwrite(&n3,sizeof(n3),1,fp);
printf("data recorded");
}


void read()
{
FILE *fp;
fp=fopen("nfil","rb");
fread(&n1,sizeof(n1),1,fp);
printf("data=%d,name=%s\n",n1.data,n1.name);

fread(&n2,sizeof(n2),1,fp);
printf("data=%d,name=%s\n",n2.data,n2.name);
fread(&n3,sizeof(n3),1,fp);
printf("data=%d,name=%s\n",n3.data,n3.name);
fclose(fp);
}


void update()
{
FILE *fp;
fp=fopen("nfil","rb");
fread(&n1,sizeof(n1),1,fp);
fread(&n2,sizeof(n2),1,fp);
fread(&n3,sizeof(n3),1,fp);
fseek(fp,24,SEEK_SET);
printf("enter data and name:");
scanf("%d %s",&n3.data,n3.name);

printf("data=%d,name=%s\n",n1.data,n1.name);
printf("data=%d,name=%s\n",n2.data,n2.name);
printf("data=%d,name=%s\n",n3.data,n3.name);

fclose(fp);
}
void search(int data, int *found, Int *pos){
int count=0,flag=0;
struct node e1;
fp1=fopen("nfil" , "rb");
while(fread(&e1,1,sizeof(e1),fp1)>0)
{
count++;
if(e1.data ==data1)
{
flag=1;
break;
}
}
if(flag==0)
{printf("not found\n");
fclose(fp1);
exit(1);
}
else
{
*pos=count;
*found=1;
}
fclose(fp1);
}



}

void menu(){
printf("\n1) write() \n2)read() \n3) update() \n4) exit");
}
