#include<stdio.h>

int main()

{
    int a[5], b[5];

    int i, j, k, l, count;

    for(k = 1; ;k++){

    for(i = 0; i<5 ; i++){

        scanf("%d", &a[i]);
    }

    for(j = 0; j<5 ; j++){

        scanf("%d",&b[j]);
    }

    for(l=1;l<=5;l++){
            i=0,j=0, count=0;

    if(a[i] == b[j]) {

        count++;
        i++;
        j++;
    }
    }

    if(count == 5){

        printf("Y\n");
    }

    else{

        printf("Y\n");
    }


    }

    return 0;
}
