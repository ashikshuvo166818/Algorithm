#include <stdio.h>
int main() {
  int a;
  printf("Enter array size : ");
  scanf("%d", &a);
  int ash[a], b, c, d, e, f, g, h, i, j = 0, m;
  printf("Enter array Elements : ");
  for (b = 0; b < a; b++) {
    scanf("%d", &ash[b]);
  }
  // Sorting because binary search always follows ascending order
  for (b = 0; b < a; b++) {
    for (c = 0; c < a - b - 1; c++) {
      if (ash[c] > ash[c + 1]) {
        d = ash[c];
        ash[c] = ash[c + 1];
        ash[c + 1] = d;
      }
    }
  }
  for (b = 0; b < a; b++) {
   // printf("%d\t", ash[b]);
  }
  printf("Enter searching Elements : ");
  scanf("%d", &e);
  m = 0;
  for (f = 0; f < a; f++) {
    g = 0;
    h = a - 1;
    i = (g + h) / 2;
    if (e == ash[f]) {
      printf("%d's position is %d\n", e, f + 1);
      return 0;
    } else if (ash[f] < e) {
      g = i;
      h = a - 1;
    } else if (e < ash[f]) {
      g = 0;
      h = i;
    } else {
      m++;
    }
  }
    printf("Not found\n");
  return 0;
}
