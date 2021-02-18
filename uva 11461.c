#include<stdio.h>

#include<math.h>

int main()

{
    int i, count, j;

    long long int a, b, c, d,e;

    for(i=1;i<=210;i++){

            count = 0;

        scanf("%lld %lld",&a,&b);

        if(a==0 && b==0){

            break;
        }
        else{

        for(j=a;j<=b;j++){

                 c = pow(j,1/2) * pow(j,1/2);

                 d = pow(j,1/2) ;

                 e = pow(j,1/2) ;

                if(c == (d*e)){

                count++;
                }

            }
        }

        printf("%d\n",count);

        }

    return 0;
}
