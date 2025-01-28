#include<stdio.h>

int main()

{
    int x, y, d, lap;

    while(scanf("%d %d", &x, &y) == 2){

        d = y -  x;

        lap = y / d;

        if(y % d != 0)
            lap++;

            printf("%d\n", lap);
    }

    return 0;


}
