
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Hello from Eren Unal at RTU C Lab 2025!\n");
  printf("You passed %d argument(s).\n", argc - 1);
  for (int i = 1; i < argc; ++i) {
    printf("  arg[%d] = %s\n", i, argv[i]);
  }
  return 0;
}
