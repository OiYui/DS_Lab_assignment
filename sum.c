#include <stdio.h>
#define MAX 50

int main(void) {
    int a[MAX][MAX];
    int r, c;
    int i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // the rows sums
    for (i = 0; i < r; i++) {
        int sum = 0;
        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i, sum);
    }

    // the columns sums
    for (j = 0; j < c; j++) {
        int sum = 0;
        for (i = 0; i < r; i++) {
            sum += a[i][j];
        }
        printf("Sum of column %d = %d\n", j, sum);
    }

    return 0;
}
