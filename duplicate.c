#include <stdio.h>

#define MAX 50

int main(void) {
    int a[MAX], n;
    int i, j, k;

    printf("Enter number of elements (1-%d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid size.\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Remove duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                // Shift all elements left
                for (k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;    // Reduce size
                j--;    // Stay at same index to check new element
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
