#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n;
    char str[101],str1[101];
    while(scanf("%d",&n)==1){
        if(n==0)break;
        k=n;
        gets(str);
        //for(m=0;m<strlen(str);m++){
            for(i=0,j=n-1;i<n;i++,j--){
                str1[i]=str[j];
                if(i==strlen(str)-1){
                    str1[i]='\0';
                    break;
                }
                else{
                    i=n;
                    n=n*2;
                }
            }
       // }

        for(l=0;l<strlen(str1);l++){
            printf("%c",str1);
        }
        printf("\n");
    }
    return 0;
}
