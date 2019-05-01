//Copy an array elements into another array
#include<stdio.h>
int main()
{
    int arr[5], brr[5];
    int i;

    for(i=0 ; i<5 ; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<5; i++){
        brr[i] = arr[i];
    }

    for(i=0; i<5; i++){
        printf("%d ", brr[i]);
    }

    return 0;
}
