#include <stdio.h>

int main() {
    char *str = "NVIDIA RDSS";
    void *ptr = &str;
    
    printf("%s", *((char **)ptr)); /* <- Fill in the blank with ptr */
    return 0;
}


