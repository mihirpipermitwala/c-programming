#include<stdio.h>
 
int main() {
    int i, j, noRows;
    printf("Enter number of rows for pattern = ");
    scanf("%d",&noRows); 
    for(i=0; i< noRows; i++) {
        for(j=0;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}