/*#include<stdio.h>
#include<string.h>

int main()
{
    char c[] = {'B', 'A', 'B', 'G','L','A','D','E', 'S', 'H'};
    int i, length = 10;
    printf("%s\n", c);

    for(i = 1;i < length; i++){
                    if(c[i] >= 65 && c[i] <= 90){
            c[i] = c[i] +32;
        }
    }
    printf("%s\n", c);
    return 0;
}*/
#include<stdio.h>
#include<string.h>

/*int string_length(char str[])
{
    int i, length = 0;
    for(i = 0; str[i] != '\0'; i++){
        length++;
    }
    return length;
}

int main()
{
    char country[100];
    int length;
    while(1 == scanf("%s\n", country)){

        length = string_length(country);
        printf("%d", length);
    }
    return 0;
}*/

int main()
{
    /*char str1[] = "bangla", str2[] = "desh", str[12];
    int i, j, a;

    for(i = 0, j = 0; str1[i] != '\0'; i++, j++){

        str[j] = str1[i];
    }
    a = j;
    for(i = 0, j = a; str2[i] != '\0'; i++, j++){
        str[j] = str2[i];
    }
    str[j] = '\0';

    printf("%s\n", str);*/

    /*char ara[100];
    while(NULL != gets(ara)){
        printf("%s", ara);
    }
    return 0;*/

    /*char s[1002], word[100];
    int i, j, length, is_word_started;

    gets(s);
    length = strlen(s);
    is_word_started = 0;

    for(i = 0, j = 0; i < length; i++){

        if(s[i] >= 'a' && s[i] <= 'z'){

            if(is_word_started == 0){
                is_word_started == 1;
                word[j] = 'A' + (s[i] - 'a');
                j++;
            }
            else{
                word[j] = s[i];
                j++;
            }
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){

            if(is_word_started == 0){
                is_word_started == 1;
            }
            word[j] = s[i];
            j++;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            if(is_word_started == 0){
                is_word_started == 1;
            }
            word[j] = s[i];
            j++;
        }
        else{
            if(is_word_started == 1){
                is_word_started == 0;
                word[j] = '\0';
                printf("%s\n", word);
                j = 0;
            }
        }

    }
    return 0;*/
    /*char word1[40], word2[40], word3[40], word4[40];

    printf("Enter text\n");
     /*gets(word1);
     gets(word2);
     gets(word3);
     getc(word4);*/
     /*scanf("%s %s", word1, word2);
     scanf("%s", word3);
     scanf("%s, word4");

     printf("\n");

     printf("Word1 = %s\n word2 = %s\n , word1, word2 ");
     printf("word3 = %s\n word4 = %s", word3, word4);

}*/
