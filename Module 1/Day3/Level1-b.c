#include <stdio.h>

void print_bits(int num) {
    int mask = 1 << 31;
    for (int i = 0; i < 32; i++) {
         
        if (num & mask)
            printf("1");
        else
            printf("0");
            mask >>= 1;
    }
    printf("\n");   
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Binary representation: ");
    print_bits(num);

    return 0;
}
