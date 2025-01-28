#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, j, flag, l1, l2;
    char s1[100];
    char s2[100];
    flag = 0;

    scanf("%d", &n);

    for(i = 1; i <= n ; i++){
        scanf("%s", s1);
        scanf("%s", s2);

        l1 = strlen(s1);
        l2 = strlen(s2);

        if(l1 == l2){
            for(j = 0; j < l1; j++){
                     if((s1[j] == 'a' || s1[j]== 'e' || s1[j] == 'i' || s1[j] =='u' || s1[j] =='o') && (s2[j] == 'a' || s2[j] =='e' || s2[j] =='i' || s2[j] == 'o' || s2[j] == 'u'))
                     flag = 1;

                       else if(s1[j] == s2[j])
                        flag = 1;

                           else{
                            flag = 0;
                             break;
                           }

            }
            if(flag == 1){
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
/*#include<stdio.h>
#include<string.h>
int main()
{
    freopen("F:\\in.txt","r",stdin);
    int tst,i,l1,l2,flag,j;
    char n1[20],n2[20];
    scanf("%d ",&tst);
    for(j=0;j<tst;j++)
    {
        scanf("%s %s",n1,n2);
        l1=strlen(n1);
        l2=strlen(n2);
        flag=0;
        if(l1==l2)
        {
            for(i=0;i<l1;i++)
            {
                if((n1[i]=='a' ||n1[i]=='e'||n1[i]=='i'||n1[i]=='o'||n1[i]=='u')&&
                    (n2[i]=='a' ||n2[i]=='e'||n2[i]=='i'||n2[i]=='o'||n2[i]=='u'))
                    flag=1;
                    else if(n1[i]==n2[i])
                        flag=1;
                    else
                    {
                        flag=0;
                        break;
                    }
            }
            if(flag==1)
                printf("Yes\n");
            else printf("No\n");
        }
        else printf("No\n");
    }
   return 0;
}*/
