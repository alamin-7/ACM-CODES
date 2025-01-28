#include<stdio.h>

int main()
{
    int n, ara[10000], T, i, j, flag;
    scanf("%d", &T);

    for(i = 1; i <= T; i++){
            flag = 0;
        for(j = 0; j < 5; j++){
            scanf("%d", &ara[j]);
        }

        for(j = 0; j < 4; j++){
            if(ara[j] == ara[j + 1]-1){
                flag = 1;
            }
           else{
                flag = 0;
                 break;
           }
        }
        if(flag == 1)  printf("Y\n");
        else if(flag == 0)   printf("N\n");
    }

    return 0;
}
