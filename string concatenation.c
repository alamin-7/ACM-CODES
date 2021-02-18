/// add two string using a function.

#include<stdio.h>
#include<string.h>

 void add_two_string(char s1[],char s2[])
{
    int  i, j;

    i = strlen(s1);

    for(j = 0; s2[j] != '\0'; i++, j++){
        s1[i] = s2[j];
    }
    s1[i] = '\0';

}
int main()

{
    char s1[1000], s2[1000];
    scanf("%s %s", s1, s2);

    add_two_string(s1, s2);
    printf("%s\n", s1);
    return 0;
