#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, k;
    char a[10000];

    while(scanf("%s", a) != EOF){
            j = 0;
        for(i = 0; a[i] != '\0'; i++){
            if(a[i] == 'B' || a[i] == 'F' ||  a[i] == 'P' ||  a[i] == 'V'){
                    if(a[i-1] != 'B' && a[i-1] != 'F' &&  a[i-1] != 'P' &&  a[i-1] != 'V')
                        a[j] = '1';
                          j++;

            }
            else if(a[i] == 'C' || a[i] == 'G' || a[i] == 'J' || a[i] == 'K' || a[i] == 'Q' || a[i] == 'S' || a[i] == 'X' || a[i] == 'Z')
            {
                if(a[i-1] != 'C' && a[i-1] != 'G' && a[i-1] != 'J' && a[i-1] != 'K' && a[i-1] != 'Q' && a[i-1] != 'S' && a[i-1] != 'X' && a[i-1] != 'Z')
                     a[j] = '2';
                        j++;


            }
                else if(a[i] == 'D' ||  a[i] == 'T'){
                        if(a[i-1] != 'D' &&  a[i-1] != 'T')
                            a[j] = '3';
                              j++;
                }
                else if(a[i] == 'L'){
                        if(a[i-1] != 'L')
                            a[j] = '4';
                             j++;
                }
                else if(a[i] == 'M' || a[i] == 'N'){
                        if(a[i-1] != 'M' && a[i-1] != 'N')
                          a[j] = '5';
                            j++;
                }
                else if(a[i] == 'R'){
                        if(a[i-1] != 'R')
                          a[j] = '6';
                            j++;
                }
                else{
                   continue;
                }
        }
        a[j] = '\0';
        printf("%s\n", a);
    }
    return 0;
}
