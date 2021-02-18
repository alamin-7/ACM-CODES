#include<stdio.h>

int GCD(int i, int j)
{
    int r;
    while(i != 0){
        r = j % i;
        j = i;
        i = r;
    }
    return (j);

}

int main()
{
    int i, j, n;

    while(scanf("%d", &n)){
        if(n == 0) break;
        long G = 0;

        for(i = 1; i < n; i++){
            for(j = i + 1; j <= n; j++){
                G += GCD(i, j);
            }
        }

        printf("%ld\n", G);
    }
    return 0;
}

/*#include<stdio.h>
int GCD(int a,int b)
        {
            int c;
            while(a!=0)
                {
                    c=b%a;
                    b=a;
                    a=c;
                }
            return(b);
        }
int main()
{
    int a,b,N;
    //freopen("in.txt","r",stdin);
    while(scanf("%d",&N) && N!=0)
    {
        long G=0;
        for(a=1;a<N;a++)
        for(b=a+1;b<=N;b++)
        {
            G+=GCD(a,b);
        }
        printf("%ld\n",G);
    }
    return(0);
}*/
