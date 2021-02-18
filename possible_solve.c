#include<stdio.h>

int main()
{
    int n, num_solution, i, j, count = 0, sum;

    printf("Enter a number:\n");

    scanf("%d", &n);

    /*num_solution = n - 1;

    printf("The number of solution is %d", num_solution);*/

    for(i = 1; i <= n ; i++)

        for(j = n - 1; j >= 1 ; j--)

        //sum = i + j;

   // if(sum == n)

        count++;

    printf("The number of solution is %d", count);

    return 0;

}
