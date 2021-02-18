#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, T, c;
    char s[10000];

    scanf("%d", &T);

    for(i = 1; i <= T; i++){
        c = 0;
        scanf("%d %s", &n, s);

        for(j = 0; j < n;){
            if(s[j] == '#'){
                j++;
            }
            else{
                c++;
                j+=3;
            }
        }
        printf("Case %d: %d\n", i, c);
    }
    return 0;
}
