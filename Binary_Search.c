#include <stdio.h>

int main() {
    int a;
    printf("Enter array size : ");
    scanf("%d", &a);

    int ash[a], b, e;
    printf("Enter array Elements (in sorted order): ");
    for (b = 0; b < a; b++) {
        scanf("%d", &ash[b]);
    }

    printf("Enter searching Element : ");
    scanf("%d", &e);

    int low = 0, high = a - 1;
    int found = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (ash[mid] == e) {
            printf("%d's position is %d\n", e, mid + 1);
            found = 1;
            break;
        } else if (ash[mid] < e) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Not found\n");
    }

    return 0;
}
