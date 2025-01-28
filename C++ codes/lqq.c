#include<stdio.h>

int main()

{
    int t, d1, m1, y1, d2, m2, y2, d, m, y, i;

    scanf("%d", &t);


    for(i = 1; i <= t; i++)
    {

        scanf("%d %d %d ", &d1, &m1, &y1);

        scanf("%d %d %d", &d2, &m2, &y2);

        d = d1 - d2;

        if(d < 0)
        {

            d = d + 30, m1--;
        }

        m = m1 - m2;

        if(m < 0)
        {

            m = m + 12;
            y1--;
        }

        y = y1 - y2;

        if(y < 0)
            printf("Case #%d: Invalid birth date\n", i);

        else if(y > 130)
            printf("Case #%d: Check birth date\n", i);


        else
            printf("Case #%d: %d\n", i, y);

    }

    return 0;
}



