#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, t, weight, length;
    char s[10];

    scanf("%d", &t);

    for(i = 1; i <= t; i++){
    gets(s);
    length = strlen(s);
    for(j = 0; j <= length; j++){
    weight = s[0] * .05 + s[2] * .005;
    }

    printf("%d\n", weight);
    }
    return 0;
}
