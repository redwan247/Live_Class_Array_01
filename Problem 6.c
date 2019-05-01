//Count how many vowels are there
#include<stdio.h>
int main()
{
    char arr[5];
    int i, vowel = 0;

    for(i=0; i<5; i++){
        scanf("%c", &arr[i]);
    }

    for(i=0; i<5; i++){
        if(arr[i] == 'a'|| arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
            vowel++;
        }
    }

    printf("Vowels = %d\n", vowel);

    return 0;
}
