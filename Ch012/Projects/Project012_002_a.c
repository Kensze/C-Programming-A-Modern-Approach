#include <stdio.h>
#include <stdbool.h>
/* #include <ctype.h> */

int tolower(int c);
bool is_palindrome(char message[], int n);

int main(void)
{
  char c, message[1000];
  int i;

  printf("Enter a message: ");
  while ((c = getchar()) != '\n') {
    if (c == ' ' || c == '\t' || c == ',' || c == '.' || c == '?' || c == '!' || c == '-')
      continue;
    message[i] = tolower(c);
    i++;
  }

  printf("%s\n", is_palindrome(message, i) ? "Palindrome" : "Not palindrome");
  return 0;
}

bool is_palindrome(char message[], int n)
{
  int i;
  for (i = 0; i <= n; i++) {
    n--;
    if (message[i] != message[n])
      return false;
  }
  return true;
}

int tolower(int c)
{
  char d;
  if (c >= 65 && c <= 90) {
    d = c + 32;
    return d;
  }
  return c;
}
