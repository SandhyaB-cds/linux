#include<stdio.h>
#include<string.h>
struct employee
{
int data;
char name[10];
};
void search(int ,int *,int *);
FILE *fp=NULL,*fp1=NULL;
typedef struct employee emp;
int main(){
emp e;int found=0;pos=0;
printf("enter emp id and new name to update");
scanf("%d",
