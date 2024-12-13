//to check whether the given string is an identifier or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
int i,j=0,flag=0;
char a[20];
clrscr();
printf("\n enter the string\n");
scanf("%s",a);
i=strlen(a);
printf("\n the length of string is i=%d",i);
if(i<=8&&isalpha(a[0])){
while(a[j]!='\0'){
if(isalnum(a[j])||a[j]=='='){
flag=1;
}
j++;
}
}
if(flag==1){
printf("\n the given string is an identifier\n");
}
else{
printf("\n the given string is not an identifier\n");
}
getch();
}