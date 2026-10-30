#include<stdio.h>
void main()
{
	char first[50],last[50],full[100];
	int i=0,j=0,length=0;
	printf("enter the first name\n");
	scanf("%s",first);
	printf("enter the last name\n");
	scanf("%s",last);
	while(first[i]!='\0')
	{
		full[length++]=first[i++];
	}
	full[length++]='\0';
	while(last[j]!='\0')
	{
		full[length++]=last[j++];
	}
	full[length]='\0';
	printf("the full name is:\n",full);
	printf("the length of the name:\n",length);
	if(length>20)
	printf("name is unfit for the screen\n");
	else
	printf("name3 is fit for screen\n");
}
