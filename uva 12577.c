#include<stdio.h>

int main()

{
    char ch[10];

    int i;

    for(i=0; ;i++){

        scanf("%s",ch[i]);

        if(ch=='*') break;

        if(ch=="Hajj"){

            printf("case %d: Hajj-e-Akbar",i);
        }

        if(ch=="Umrah"){

            printf("case %d: Hajj-e-Asghar",i);
        }
    }
}
