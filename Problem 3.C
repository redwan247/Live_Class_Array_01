//Find specific number from an array
#include<stdio.h>
int main()
{
    int arr[5], i, num, found = 0;

    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &num);

    for(i=0; i<5; i++){
        if(arr[i] == num){
            found = 1;
        }
    }

    if(found==1){
        printf("Element found!\n");
    }

    else{
        printf("Element not found!\n");
    }

    return 0;
}
