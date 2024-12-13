//check whether comments are removed or  not
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,k,l=0,n;
char a[55],b[30];
clrscr();
printf("\n enter the string\n");
gets(a);
n=strlen(a);
printf("\n the length of string is n=%d",n);
for(i=0;i<n;i++)
{
if(a[i]=='/'&&a[i+1]=='*'){
k=i;
for(i=k;i<n;i++){
if(a[i]=='*'&&a[i+1]=='/'){
j=i;
}
}
}
}
printf("\nthe comment start at %d and end at %d\n",k,j);
for(i=k+2;i<j;i++)
{
b[l]=a[i];
l++;
}
printf("\n the content in comment are\n");
for(l=0;l<j;l++)
{
printf("%c",b[l]);
}
j=j+2;
for(i=k;i<n;i++){
a[i]=a[j];
j++;
}
printf("\n the string after removing the comment are\n");
puts(a);
getch();
}