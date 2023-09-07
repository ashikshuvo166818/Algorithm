//Insertion Sort
#include <stdio.h>
void array(int ash[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &ash[i]);
    }
}
void sort(int ash[], int n) {
    for (int i = 1; i < n; i++) {
        int hole = i;
        int key = ash[i];
        while (hole > 0 && ash[hole - 1] > key) {
            ash[hole] = ash[hole - 1];
            hole--;
        }
        ash[hole] = key;
    }
}
void sort2(int ash[], int n) {
    for (int i = 1; i < n; i++) {
        int hole = i;
        int key = ash[i];
        while (hole > 0 && ash[hole - 1] < key) {
            ash[hole] = ash[hole - 1];
            hole--;
        }
        ash[hole] = key;
    }
}

void show(int ash[], int n) {
    for (int a = 0; a < n; a++) {
        printf("%d\t", ash[a]);
    }
}
int main() {
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int ash[n];
    array(ash, n);
    sort(ash, n);
    printf("After Ascending : \n");
    show(ash, n);
    sort2(ash, n);
    printf("\nAfter Descending : \n");
    show(ash, n);
}
