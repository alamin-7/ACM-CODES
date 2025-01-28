#include<stdio.h>

#include<math.h>

int main()

{
  long long int i, sum = 0, x;

    for(i=1;i<=pow(10,6);i++){

           x = i %7;

    if(x == 0){

        sum = sum +i;

    }
    }

    printf("%lld",sum);

    return 0;
}
