#include<stdio.h>

#include<math.h>

int main()

{
    int a, b, i, j, count = 0, x, y;

    for(i=1;i<=201;i++){

        scanf("%d%d",&a,&b);

    if(a==0 && b==0) break;

    else{

    for(j=a;j<=b;j++){

     x = pow(j,1/2);

     y = pow(x,2);

     if(y==x)

        count++;
    }

    }

    }

    printf("%d\n",count);

    return 0;
}

