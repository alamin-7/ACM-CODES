 #include<stdio.h>

int main()

{
   long long int n, i, re_num, remainder, count1, count2, a;

    while(scanf("%lld", &n) == 1){
            a = n;
            count1 = 0;
            count2 = 0;

             for(i = 2; i <= a-1; i++){

            if(a % i == 0){
                count1++;
                break;
            }

        }

        if(count1 != 0){

            printf("%lld is not prime.\n", a);
        }

        else{
                 re_num = 0;

        while(n > 0){
            remainder = n % 10;

            re_num = re_num * 10 + remainder;

            n  = n/10;
        }

        for(i = 2 ; i <= re_num -1; i++){

            if(re_num % i == 0){
                count2++;
                 break;
            }
        }

        if((count1 == 0 && count2 == 0) && (re_num != a)){
           printf("%lld is emirp.\n", a);

           }

        else if(count1 == 0)

            printf("%lld is prime.\n", a);


        }
    }

    return 0;
}
