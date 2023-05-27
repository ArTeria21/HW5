#include <stdio.h>
#include <stdlib.h>

int main() {
  int n; 
  scanf("%d", &n);

  int* a = (int*) malloc(n * sizeof(int)); // выделение памяти для массива a

  // чтение и заполнение массива
  for (int* p = a; p < a+n; ++p) {
    scanf("%d", p); // читаем в значение указателя
  }

  int changed = 0;

  // изменение отрицательных элементов на их абсолютное значение
  for (int* p = a; p < a+n; ++p) {
    if (*p < 0) {
      ++changed;
      *p = abs(*p);
    }
  }

  printf("%d ", changed);

  // вывод массива
  for (int* p = a; p < a+n; ++p) {
    printf("%d ", *p); // выводим значение, на которое указывает указатель
  }

  printf("\n");

  free(a); // освобождение занятой памяти

  return 0;
}