#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void)
{
  int a[] = {1,2,4,54,12,155,46};
  int key, n;
  n = sizeof a / sizeof(a[0]);

  printf("Enter something to search for: ");
  scanf("%d", &key);

  /* printf("%d %s\n",key, (search(a, n, key) ? "was found" : "was not found")); */
  search(a, n, key);
}

bool search(const int a[], int n, int key)
{
  int index = 0;
  const int *p;
  for (p = a; p < a + n; p++) {
    if (*p == key) {
      printf("Key %d found at index: %d\n", key, index);
      return true;
    }
    index++;
  }
  return false;
}
