#include<stdio.h>
#include<string.h>
#define m 100
char rev(char str[m]);
int main(void)
{
    printf("\nEnter a string!\n");
    char str[m];
    scanf("%s",&str);
    printf("\nThe string after reversal is:");
    rev(str);
    
}
char rev(char str[m])
{
    char r[m];
    int i, c=0;
    int l=strlen(str);
    for (i = l - 1; i >= 0; i--)
  	{
  		r[c++] = str[i];
  	}
    r[l]='\0';
    printf("\n%s",r);
}