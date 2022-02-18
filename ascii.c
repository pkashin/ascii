#include <stdio.h>

int main() {
  FILE *file;
  file = fopen("ascii.txt","w+");
  fclose(file);
  for (int i = 0; i <= 127; i++) {
    file = fopen("ascii.txt","a+");
    char symbol = (char)(i);
    fprintf(file, "\n%c", symbol);
    fclose(file);
  }
  return 0;
}
