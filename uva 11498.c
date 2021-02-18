#include<stdio.h>

int main()

{
    int k, i, n, m, x, y, x1, y1;

    while(scanf("%d", &k) == 1 && k != 0){

        scanf("%d %d", &n, &m);

        for(i = 1; i <= k; i++){

            scanf("%d %d", &x, &y);

            x1 = x - n;
            y1 = y - m;

            if(x1 == 0 || y1== 0){
                printf("divisa\n");
            }
            else if(x1 > 0 && y1 > 0){
                printf("NE\n");
            }
            else if(x1 < 0 && y1 > 0){
                printf("NO\n");
            }
            else if(x1 < 0 && y1 < 0){
                printf("SO\n");
            }

            else if(x1 > 0 && y1 < 0){
                printf("SE\n");
            }
        }
    }

    return 0;
}
