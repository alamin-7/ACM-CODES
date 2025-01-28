#include<stdio.h>

int main()

{
    int row, col, ans;

    while(scanf("%d %d",&row, &col)!=EOF){

        ans = ( row * col )- 1;

        printf("%d\n", ans);
    }
    return 0;
}
