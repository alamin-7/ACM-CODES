#include<stdio.h>

int main()

{
    int n, i, j, count;

    scanf("%d", &n);

    int p[13];

    for(i = 1; i <= n; i++){
            count = 0;

        for(j = 0; j < 13; j++){

            scanf("%d", &p[j]);
        }

        for(j = 12; j >= 0; j--){

                if(p[j] >= 1)
                count++;
        }
        if(count == 13)

            printf("Set #%d: Yes\n", i);

        else
            printf("Set #%d: No\n", i);
    }

    return 0;
}
