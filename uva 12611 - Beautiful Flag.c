#include<stdio.h>

int main()

{
    int t, i, r, l, w, l1, l2, w1;
    scanf("%d", &t);

    for(i = 1; i <= t; i++){

        scanf("%d", &r);
        l = r * 5;
        w  = (60 * l)/ 100;
        l1 = (45 * l)/ 100;
        l2 = (55 * l)/ 100;
        w1 = w / 2;

        printf("Case %d:\n", i);

        printf("-%d %d\n",l1, w1);
        printf("%d %d\n",l2, w1);
        printf("%d -%d\n",l2, w1);
        printf("-%d -%d\n",l1, w1);
    }
    return 0;
}
