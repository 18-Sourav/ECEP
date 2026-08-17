#include <stdio.h>

struct s {
    char a;
    double b;
    char c;
};

int main() {
    printf("%lu\n", sizeof(struct s));
}