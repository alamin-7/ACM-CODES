#include<stdio.h>

int main()

{
    int i, j, n, temp, k, count = 0;

    int arr[5]={2, 3, 1};

    n = 3;

    for(i = 0; i < n- 1; i++){

    for(j = i + 1; j < n; j++){

        if (arr[i] > arr[j]){

                count++;

            temp = arr[i];

            arr[i] = arr[j];

            arr[j] = temp;
        }

      }
    }

     //  for(i = 0; i < n; i++)

      //  printf(" %d", arr[i]);
     printf("%d", count);

    return 0;
}
