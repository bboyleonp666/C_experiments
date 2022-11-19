#include <stdio.h>
#include <stdint.h>

struct s {
    uint32_t a[3];
    uint32_t *b;
    char c;
    // char c[9];
    char *d;
};

struct s1 {
    uint32_t a;
    uint32_t *b;
    char c;
    char *d;
}__attribute__((packed));

int main()
{
    printf("%d\n", sizeof(struct s));
    printf("%d\n", sizeof(struct s1));
    return 0;
}