#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, l, a1[10000], a2[10000], i, j, k, m;

    scanf("%d", &T);
     char ch = '"';

    for(i = 1; i <= T; i++){
        scanf("%d", &l);

        for(m = 0; m < l; m++){
             scanf("%d", &a1[m]);
        }
        for(k = 0; k < l ; k++){
            scanf("%d", &a2[k]);
        }
        for(j = 0; j < l; j++){
            if(a1[j] == 0){
                if(a2[j] == 1)
                     printf(" ");
            }


            if(a1[j] == 1){
                if(a2[j] == 1){
                    printf(".");
                }
                else if(a2[j] == 2){
                     printf(",");
                }
                else if(a2[j] == 3){
                     printf("?");
                }
                else
                     printf("%c", ch);
            }
            if(a1[j] == 2){
                if(a2[j] == 1){
                     printf("a");
                }
                else if(a2[j] == 2){
                     printf("b");
                }
                else if(a2[j] == 3){
                   printf("c");
                }
            }
            if(a1[j] == 3){
                if(a2[j] == 1){
                     printf("d");
                }
                else if(a2[j] == 2){
                     printf("e");
                }
                else if(a2[j] == 3){
                      printf("f");
               }
            }
        if(a1[j] == 4){
                if(a2[j] == 1){
                    printf("g");
                }
                else if(a2[j] == 2){
                    printf("h");
                }
                else if(a2[j] == 3){
                      printf("i");
                }
            }
            if(a1[j] == 5){
                if(a2[j] == 1){
                     printf("j");
                }
                else if(a2[j] == 2){
                     printf("k");
                }
                else if(a2[j] == 3){
                     printf("l");
                }
            }
            if(a1[j] == 6){
                if(a2[j] == 1){
                    printf("m");
                }
                else if(a2[j] == 2){
                     printf("n");
                }
                else if(a2[j] == 3){
                    printf("o");
                }
            }
            if(a1[j] == 7){
                if(a2[j] == 1){
                    printf("p");
                }
                else if(a2[j] == 2){
                     printf("q");
                }
                else if(a2[j] == 3){
                     printf("r");
                }
                    else
                        printf("s");
             }
              if(a1[j] == 8){
                if(a2[j] == 1){
                     printf("t");
                }
                else if(a2[j] == 2){
                     printf("u");
                }
                else if(a2[j] == 3){
                    printf("v");
                }
            }
            if(a1[j] == 9){
                if(a2[j] == 1){
                     printf("w");
                }
                else if(a2[j] == 2){
                     printf("x");
                }
                else if(a2[j] == 3){
                     printf("y");
                }
                    else
                         printf("z");
                }
            }
            printf("\n");
        }

    return 0;
}


/*#include<bits/stdc++.h>


using namespace std;
#define pf printf

int main()
{
    int n,m,i,j,k,l;
    int a[1001] , b[1001];
    scanf("%d",&n);
    char er = '"';
    while(n--)
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(k=0;k<m;k++)
        {
            scanf("%d",&b[k]);
        }
        for(j=0;j<m;j++)
        {
            if(a[j]==0)
            {
                if(b[j]==1)
                 pf(" ");
            }
            if(a[j]==1)
            {
                if(b[j]==1)
                    pf(".");
                else if(b[j]==2)
                    pf(",");
                else if(b[j]==3)
                    pf("?");
                else pf("%c",er);
            }
            if(a[j]==2)
            {
                if(b[j]==1)
                    pf("a");
                else if(b[j]==2)
                    pf("b");
                else if(b[j]==3)
                    pf("c");
                //else pf(""");
            }
            if(a[j]==3)
            {
                if(b[j]==1)
                    pf("d");
                else if(b[j]==2)
                    pf("e");
                else if(b[j]==3)
                    pf("f");
                //else pf(""");
            }
            if(a[j]==4)
            {
                if(b[j]==1)
                    pf("g");
                else if(b[j]==2)
                    pf("h");
                else if(b[j]==3)
                    pf("i");
                //else pf(""");
            }
            if(a[j]==5)
            {
                if(b[j]==1)
                    pf("j");
                else if(b[j]==2)
                    pf("k");
                else if(b[j]==3)
                    pf("l");
                //else pf(""");
            }
            if(a[j]==6)
            {
                if(b[j]==1)
                    pf("m");
                else if(b[j]==2)
                    pf("n");
                else if(b[j]==3)
                    pf("o");
                //else pf(""");
            }
            if(a[j]==7)
            {
                if(b[j]==1)
                    pf("p");
                else if(b[j]==2)
                    pf("q");
                else if(b[j]==3)
                    pf("r");
                else pf("s");
            }
            if(a[j]==8)
            {
                if(b[j]==1)
                    pf("t");
                else if(b[j]==2)
                    pf("u");
                else if(b[j]==3)
                    pf("v");
                //else pf(""");
            }
            if(a[j]==9)
            {
                if(b[j]==1)
                    pf("w");
                else if(b[j]==2)
                    pf("x");
                else if(b[j]==3)
                    pf("y");
                else pf("z");
            }

        }
        pf("\n");
    }
}*/
