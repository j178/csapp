//
// Created by johnj on 11/13/16.
//
#include <stdio.h>

int main(void) {
    unsigned x = 0x00654321;
    printf("A. %x", x & 0xff);
    //异或的特性：
    //1. a ^ 0 == a
    //2. a ^ a == 0
    //3. a ^ (~0) == ~a

    //第二个特性经常用在汇编中， 用来快速将寄存器清零
    //第三个特性表示将a与1异或，相当于对a取反， 这可以用来翻转a中的特定位
    printf("B. %x", ~x ^ 0xff);
    printf("C. %x", x | 0xff);
}