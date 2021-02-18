#include<stdio.h>

int main()

{
    int a,b,c,d,e,f,g,h,i,j,k,n;

    scanf("%d",&n);

    printf("Lumberjacks:\n");

    for(k=1;k<=n;k++){

    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    if((a>b && b>c && c>d && d>e && e>f && f>g && g>h && h>i && i>j)||(a<b && b<c && c<d && d<e && e<f && f<g && g<h && h<i && i<j)){

        printf("Ordered\n");
    }

    else

        printf("Unordered\n");

    }

    return 0;
}
