#include <stdio.h>

int main() {
  int size;
  scanf("%d", &size);

  int first_half[size/2], second_half[size/2];

  for (int i = 0; i < size; i++) {
    if (i < size/2) {
      scanf("%d", &first_half[i]);
  } else {
    scanf("%d", &second_half[i - size/2]);
    }
}

for (int i=size/2; i<size; i++) {
printf("%d ", second_half[i - size/2]);
}

for (int i=0; i<size/2; i++) {
printf("%d ", first_half[i]);
}

return 0;
}