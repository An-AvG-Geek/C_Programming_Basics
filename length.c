// program to find length of a given string

#include<stdio.h>
void main()
{
char name[100];
int len=0,i=0;
printf("Enter a name\n");
gets(name);
for(i=0;name[i]!='\0';i++)
{
len++;

}
printf("The length of the name is %d\n",len);
}