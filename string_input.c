#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	//This program will demonstrate how to input a string, a character
	//and a sentence in three different ways
	
	char ch;
    	char s[50];
    	char sen[100];
    	scanf("%c",&ch);
    	scanf("%s",s);
    	scanf("\n");
    	scanf("%[^\n]%*c",sen);
    	printf("%c\n%s\n%s\n",ch,s,sen);
	return 0;
}

