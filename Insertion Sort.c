#include<stdio.h>

int main(){

    int n, arr[200], i, j, k, temp ;

    scanf("%d", &n );

    for( i = 1 ; i <= n ; i++ ){
        scanf("%d", &arr[i] );
    }

    for( i = 1 ; i <= n ; i++ ){
       j = i;
        while( j > 1 && arr[j] < arr[j-1] ){
            temp = arr[j] ;
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;

             for( k = 1 ; k <= n ; k++ ){
                printf("%d ", arr[k] );
            }
                printf("\n");
            }

    }

    for( i = 1 ; i <= n ; i++ ){
        printf("%d ", arr[i] );
    }

    return 0;
}
