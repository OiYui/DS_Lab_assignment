#include <stdio.h>

#define MAX 10      //maximum size of array already defined

int main(void) {
    int a[MAX];     // the array
    int n = 0;      // current number of elements
    int choice;     // menu choice

    while (1) {
        //menu
        printf("\nMENU\n");
        printf("1. CREATE\n");
        printf("2. DISPLAY\n");
        printf("3. INSERT\n");
        printf("4. DELETE\n");
        printf("5. LINEAR SEARCH\n");
        printf("6. EXIT\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) return 0;

        if (choice == 1) {
            // CREATE: generated array with n elements
            int i;
            printf("Enter number of elements (1-%d): ", MAX);
            scanf("%d", &n);
            if (n < 1 || n > MAX) {
                printf("Invalid size. Setting n = 0.\n");
                n = 0;
                continue;
            }
            printf("Enter %d element(s): ", n);
            for (i = 0; i < n; i++) scanf("%d", &a[i]);
            printf("Array created.\n");

        } else if (choice == 2) {
            // DISPLAY: prints the array
            int i;
            if (n == 0) {
                printf("Array is empty.\n");
            } else {
                printf("Array: ");
                for (i = 0; i < n; i++) printf("%d ", a[i]);
                printf("\n");
            }

        } else if (choice == 3) {
            // INSERT: allows user to insert value at a position
            if (n >= MAX) {
                printf("Array is full.\n");
            } else {
                int pos, val, i;
                printf("Enter position (0 to %d): ", n); // inserting at n = append
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Invalid position.\n");
                } else {
                    printf("Enter value: ");
                    scanf("%d", &val);
                    // shift right from end to pos
                    for (i = n; i > pos; i--) a[i] = a[i - 1];
                    a[pos] = val;
                    n++;
                    printf("Inserted.\n");
                }
            }

        } else if (choice == 4) {
            // DELETE: delete value at selected position
            if (n == 0) {
                printf("Array is empty.\n");
            } else {
                int pos, i;
                printf("Enter position to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position.\n");
                } else {
                    // shift left from pos to end
                    for (i = pos; i < n - 1; i++) a[i] = a[i + 1];
                    n--;
                    printf("Deleted.\n");
                }
            }

        } else if (choice == 5) {
            // LINEAR SEARCH: finds the first index of key
            if (n == 0) {
                printf("Array is empty.\n");
            } else {
                int key, i, found = -1;
                printf("Enter value to search: ");
                scanf("%d", &key);
                for (i = 0; i < n; i++) {
                    if (a[i] == key) { found = i; break; }
                }
                if (found == -1) printf("Not found.\n");
                else printf("Found at index %d.\n", found);
            }

        } else if (choice == 6) {
            // EXIT
            printf("Goodbye!\n");
            break;

        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
