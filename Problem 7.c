//Print roll and marks
#include<stdio.h>
int main()
{
    int marks[10], i;

    for(i=0; i<10; i++){
        scanf("%d", &marks[i]);
    }

    for(i=0; i<10; i++){
        scanf("Roll: %d    Marks: %d\n", (i+1), marks[i]);
    }


    return 0;
}
