//
// Created by johnj on 11/13/16.
//
#include <stdio.h>

int main(void) {
    unsigned x = 0x00654321;
    printf("A. %x", x & 0xff);
    printf("B. %x", ~x ^ 0xff);
    printf("C. %x", x | 0xff);
}