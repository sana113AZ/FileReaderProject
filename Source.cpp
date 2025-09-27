#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	/*
	FILE* fp;
	fp = fopen("data.txt", "w");
	fprintf(fp, "hallow\n");
	fclose(fp); 
	*/
	FILE* fin;
	fin = fopen("data.txt", "r");
	if (fin == NULL)
	{
		printf("the file couldnt be open");
		exit(1);
	}
	char ch;
	int cd = 0;
	int cs = 0;
	int cc = 0;
	int co = 0;
	while ((ch = fgetc(fin)) != EOF)
	{
		if (ch >= '0' && ch <= '9')
		{
			cd++;
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			cs++;
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			cc++;
		}
		else 
			co++;
   }
	char name[20];
	printf("enter your name:\n");
	scanf("%s", name);
	printf("My name : %s\n", name);
	printf("number of digits = %d\n", cd);
	printf("number of small letters = %d\n", cs);
	printf("number of big letters = %d\n", cc);
	printf("number of other characters = %d\n", co);
	fclose(fin);
	return 0;
}
