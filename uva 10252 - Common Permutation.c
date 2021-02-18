#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100000], s2[100000], s[100000];
    char ch;
    int i, j, k, len1, len2;

    while(gets(s1)){
            gets(s2);
            k = 0;

            len1 = strlen(s1);
            len2 = strlen(s2);

        for(i = 0; i < len1; i++){
            for(j = 0; j < len2 ; j++){
                if(s1[i] == s2[j]){
                    s[k] = s1[i];
                    k++;
                    }
                }
            }

        s[k] = '\0';
           for(i = 0; i < k-1; i++){
             for(j = i + 1; j < k ;j++){
                if(s[i] > s[j]){
                    ch = s[i];
                    s[i] = s[j];
                    s[j] = ch;
                }
            }
        }

        printf("%s\n", s);
    }
    return 0;
}


