#include <stdio.h>

struct Move
{
	int x;
	int y;
};

struct Move getFinishPoint(struct Move arr[], int n) {
  struct Move start;
  start.x = 0;
  start.y = 0;
  for (int i = 0; i < n; i++) {
    start.x += arr[i].x;
    start.y += arr[i].y;
  }
  return start;
}