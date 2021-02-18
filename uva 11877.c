#include<stdio.h>

int main()

{
    int n, c, i;

    for(i=1;i<=10;i++){

        scanf("%d",&n);

        if(n==0){

            break;
        }
        else

        c = n/2;

        printf("%d\n",c);
    }

    return 0;
}
