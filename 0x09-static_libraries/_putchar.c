#include <unistd.h>  // Include the necessary header file

int _putchar(char c) {
  return write(1, &c, 1);  // Use the `write` system call to output the character
}

