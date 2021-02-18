
/// Determine string length

#include<stdio.h>

int length(char str[])
{
    int i, l = 0;
    for(i = 0; str[i] != '\0'; i++){
        l++;
    }
    return l;
}

int main()
{
    int l, string_length ;
    char str[10000];
    gets(str);
    string_length = length(str);
    printf("%d", string_length);
}
