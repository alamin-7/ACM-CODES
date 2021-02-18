/// word counting in a sentence.

#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    int i, count, c;

    while(gets(a)){
            count = 0;
            c = 1;
        for(i = 0; a[i] != '\0'; i++){
           if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')){
                    if(c)
                        count++;
                        c = 0;
           }
           else
           c = 1;

        }
    printf("%d\n", count + 1);
    }
}
