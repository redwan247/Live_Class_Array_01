//Count how many evens are there
#include<stdio.h>
int main()
{
    int arr[5];
    int i, even = 0;

    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<5; i++){
        if((arr[i]%2) == 0){
            even++;
        }
    }

    printf("Evens = %d\n", even);

    return 0;
}
