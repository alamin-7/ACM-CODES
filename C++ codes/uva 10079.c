#include<stdio.h>

int main()

{
    long long int n, p;


    while(scanf("%lld",&n)!=EOF){

        if(n<0){

            break;
        }
        else{

            if(n%2==0){

               p = n * (n/2) + (n/2) + 1;
swaa
               printf("%lld\n",p);
            }

            else if(n%2!=0){

                p = n * (n/2) + n + 1;

                printf("%lld\n",p);
            }
        }

    }

    return 0;

}
