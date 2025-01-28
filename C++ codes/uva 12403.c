#include<stdio.h>

#include<string.h>

int main()
{
    int account = 0, d, t, i;

    char a[1000];

    scanf("%d", &t);

    for(i = 1; i <= t; i++){

        scanf("%s", a);

        if(strcmp(a, "donate") == 0){

            scanf("%d", &d);

            account = account + d;
        }
         else
            printf("%d\n", account);
    }

    return 0;
}
