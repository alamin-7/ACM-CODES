#include<stdio.h>

int main()

{
    int p, h, o, diff;
    while(scanf("%d %d %d", &p, &h, &o) == 3){

        diff = o - p;

        if(diff < h){
            printf("Hunters win!\n");
        }
        else
            printf("Props win!\n");
    }

    return 0;
}
