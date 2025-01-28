
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, i, mx, c, cn, d, num;
    while(scanf("%lld %lld", &a, &b)== 2 && a > 0 && b > 0){
            mx = 0;

            if(a > b){
                d = a;
                a = b;
                b = d;
            }
            printf("Between %lld and %lld, ", a, b);

        for(i = a; i <= b; i++){
                c = i;
                cn = 1;
           if(c % 2 == 0){
            c = c /2;
           }
           else{
            c = c * 3 + 1;
           }

            while(c != 1){

                if(c % 2 == 0){
                    c = c / 2;
                     cn++;
                }
                else{
                    c = c * 3 + 1;
                     cn++;
                }
            }
            if(cn > mx){
                mx = cn;
                num = i;

            }
        }
               printf("%lld generates the longest sequence of %lld values.\n", num, mx);
    }
    return 0;
}

/*#include<string>
#include<bitset>
#include<vector>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)
using namespace std;
int main()
    {
        long long a,b,c,Max,Gn,p,t,i;
        while(scanf("%lld%lld",&a,&b)==2)
        {
            Max=0;
            if(a==0||b==0)
            break;
            if(a>b)
            swap(a,b);
            for(i=b;i>=a;i--)
            {
                p=i;
                c=1;
                if(p%2==0)
                {
                    p/=2;
                }
                else
                {
                    p=3*p+1;
                }
                while(p!=1)
                {
                    if(p%2==0)
                    {
                        p/=2;
                        c++;
                    }
                    else
                    {
                        p=3*p+1;
                        c++;
                    }

                }
                if(c>=Max)
                {
                    Max=c;
                    Gn=i;
                }
            }
          printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,Gn,Max);
        }
        return 0;
    }*/
