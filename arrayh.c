#include<stdio.h>

int main()

{
    int grade [5], i, sum = 0;

    float average;

    for(i=1;i<=5;i++){

        printf("\n Enter grade [%d]",i);

        scanf("%d", &grade[i]);

        sum += grade[i];
    }

    average = (float)(sum)/5.0;

    printf("\t Average is : %f",average);

    return 0;
}
