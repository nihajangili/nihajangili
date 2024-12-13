#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
char op[]={"+","-","/","","<",">","="};
char op1[100]={" "};
char *h[]={"stdio.h","conio.h","string.h","math.h"};
char h1[100]={" "};
char *d[]={"int","float","char","double"};
char d1[]={" "};
char *k={"for","do","while","void","if","else","switch","case","default"};
char k1={" "};
char *fun[]={"fscanf","scanf","printf","fprintf"};
char fun1[100]={" "};
void main()
{
char ss[25][5]={"&","{","}",",","#","(",")"};
char str[100],ss1[100]={" "};
char id[100]={" "};
char blank[2]={" "};
int i,j=0,flag=0,f;
FILE *ip;
ip=fopen("a.c","r");
clrscr();
while(!feof(ip))
{
fscanf(ip,"%s",str);
for(i=0;i<4;i++)
{
if(strstr(str,h[i]!=NULL))
{
strcat(h1,h[i]);
strcat(h1,blank);
strcat(ss1,"<>");
strcat(ss1,blank);
}
}
for(i=0;i<9;i++)
{
if(strstr(str,k[i]!=NULL))
{
strcat(k1,k[i]);
strcat(k1,blank);
}
}
for(i=0;i<9;i++)
{
if(strstr(str,ss[i]!=NULL))
{
if((strstr(str,"printf")!='\0')&&(ss[i]==ss[0]))
continue;
else
strcat(ss1,ss[i]);
}
}
for(i=0;i<4;i++)
{
if(strstr(str,fun[i]!=NULL))
{
strcat(fun1,fun[i]);
strcat(fun1,blank);
}
}
if(str[0]!='#')
{
for(i=0;i<7;i++)
{
if(strstr(str,op[i]!=NULL))
{
strcat(op1,op[i]);
strcat(op1,blank);
}
}
}
if(flag==1)
{
i=0;
while(str[i]!==';')
{
if(str[i]==',')
id[j++]='';
else
if(str[i]=='=')
while(str[i++]!=',')
else
id[j++]=str[i];
i++;
}
flag=0;
id[j++]='';
}
for(i=0;i<3;i++)
{
if(strcmp(str,d[i]==0))
{
strcat(d1,d[i]);
strcat(d1,blank);
flag=1;
}
}
}
printf("\n\n__________\n\n");
printf("\n keywords %s",k1);
printf("\n headerfiles %s",h1);
printf("\n specl sym %s",ss1);
printf("\n datatypes %s",d1);
printf("\n identifiers %s",id);
printf("\n operators %s",op1);
printf("\n fun %s",fun1);
getch();
fclose(ip);
}
