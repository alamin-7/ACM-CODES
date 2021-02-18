#include<bits\stdc++.h>

using namespace std;

int main()

{
    int a, b, c, i;

    for(i = 1; ;i++){

    printf("Enter a number in decimal:");

    scanf("%d", &a);

    printf("\nEnter which bit do you want to test:");

    scanf("%d", &b);

    c = bool (a &(1<<(b-1)));

    if(c==1){

        printf("on\n");
    }

    else{

        printf("off\n");

    }
    }

    return 0;
}
