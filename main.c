# include <stdio.h>
# include <string.h>

float problem01(int *ray, int length) {
  int i;
  int total = 0;
  for (i = 0; i < length; i++) {
    total += ray[i];
  }
  float result = total/length;
  return result;
}

void copy_arr(int *a, int *b, int length) {
  int i;
  for (i = 0; i < length; i++) {
    b[i] = a[i];
  }
  return;
}

int string_length(char s[]) {
  int i = 0;
  while (*(s + i) != '\0') {
    i++;
  }
  return i;
}


int main () {
  char m[256] = "may";
  char h[256] = "hathaway";

  strcpy(h, m);
  int i;
  for (i = 0; i < 256; i++) {
    printf("%c", h[i]);
  }
  printf("\n");

  strcat(m, h);
  for (i = 0; i < 256; i++) {
    printf("%c", m[i]);
  }
  printf("\n");

  char hw[256] = "hello world";
  printf("%d\n", strcmp(m, hw));

  printf("%d\n", strchr(m, 'a'));
}
