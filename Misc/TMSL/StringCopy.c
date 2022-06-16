#include<stdio.h>
#define m 100
char input(char str[m]);
char copy(char str[m], char str2[m]);
int main()
{
    char str[m];
    printf("Enter the string: ");
    input(str);
    char str2[m];
    printf("%s",str);
    printf("\nThe copied string is: ");
    copy(str, str2);
    printf("%s",str2);
    return 0;
    
}
char input(char str[m]){
    gets(str);
}
char copy(char str[m], char str2[m])
{
    int i;
    for(i=0; str[i]!='\0';i++){
        str2[i]=str[i];
    }
    str2[i]='\0';
}
