//Sum of all elements
#include<stdio.h>
int main()
{
    int arr[5], i, sum = 0;

    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<5; i++){
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
