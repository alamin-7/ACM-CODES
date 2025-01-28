#include<stdio.h>

int main()

{
    int t1, t2, f, a, ct1, ct2, ct3, t, i,sum , avg;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){

        scanf("%d %d %d %d %d %d %d", &t1, &t2, &f, &a, &ct1, &ct2, &ct3);

        if(ct1 >= ct3 && ct2 >=ct3)

            avg = (ct1 + ct2) / 2;


        else if(ct2 >= ct1 &&ct3 >=ct1)

            avg = (ct2 + ct3)/2;

        else

            avg = (ct1 + ct3)/2;

        sum = avg + t1 + t2 + f + a;

        if(sum >= 90)
            printf("Case %d: A\n", i);

       else if(sum >= 80 && sum < 90)
            printf("Case %d: B\n", i);
        else if(sum >= 70 && sum < 80)
            printf("Case %d: C\n", i);
        else if(sum >= 60 && sum < 70)
            printf("Case %d: D\n", i);
        else
            printf("Case %d: F\n", i);
    }

    return 0;
}
