#include "main.h"

void _putchar(char c) {
    putchar(c);
}

void print_numbers(void) {
    char digits[] = "0123456789\n";
    for (int i = 0; i < 11; i++) {
        _putchar(digits[i]);
    }
}

int main() {
    print_numbers();
    return 0;
}
