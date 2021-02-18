///  string palindrome.

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[1000], str2[1000];
    int ln, i, j;

    while(scanf("%s", str1) != EOF){
    ln = strlen(str1);
    i = ln -1;
    j = 0;

    while(i >= 0){
        str2[j] = str1[i];
        j++;
        i--;
    }
    str2[j] = '\0';

    if(strcmp(str1,str2) == 0){
        printf("Palindrome\n");
    }
    else
        printf("Not palindrome\n");
    }

    return 0;
}
