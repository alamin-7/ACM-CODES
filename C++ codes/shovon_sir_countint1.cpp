#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a, b;

    printf("Please enter a decimal number:");

    scanf("%d", &a);

    b = __builtin_popcount(a);

    printf("The number of 1 in the binary number after converting is %d\n", b);

    return 0;
}
