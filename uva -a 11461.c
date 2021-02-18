#include<stdio.h>

#include<math.h>

int main()
{
     int a, b, i, j, root, count;

    for(i = 1; i <= 201; i++){

            count = 0;

        scanf("%d %d", &a, &b);

        if(a == 0 && b == 0) break;

        for(j = a; j <= b; j++){

            root = sqrt(j);

            if(root * root == j)

                    count++;

        }

        printf("%d\n", count);

    }
    return 0;
}
