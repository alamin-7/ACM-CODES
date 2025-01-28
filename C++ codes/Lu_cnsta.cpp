#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[10000], s1[10000];
    int i, j = 0;
    gets(s);
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] != ' '){
            s1[j++] = s[i];
        }
    }
    s1[j] = '\0';
    printf("%s", s1);
}

