#include <stdio.h>

struct Person
{
	int age; // возраст
	char name[30]; // имя
};

float averageAge(struct Person arr[], int n) {
  int sum;
  for (int i=0; i < n; i++) {
    sum += arr[i].age;
  }
  return sum / n;
}