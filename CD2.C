//check whether the string is in comments or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int t;
char a[25];
clrscr();
printf("\n enter the comment\n");
scanf("%s",a);
t=strlen(a);
printf("\n the length of comment is t=%d",t);
if(a[0]=='/'&&a[1]=='*'&&a[t-1]=='/'&&a[t-2]=='*'){
printf("\nthe string is in comments\n");
}
else{
printf("\nthe string is not in comments\n");
}
getch();
}