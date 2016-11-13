#include<stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    for (size_t i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val) {
    int i = val;
    float f = (float) i;
    int *p = &i;
    show_int(i);
    show_float(f);
    show_pointer(p);
}

void exercise1() {
    int v = 0x87654321;
    byte_pointer p = (byte_pointer) &v;
    show_bytes(p, 1);
    show_bytes(p, 2);
    show_bytes(p, 3);
}

int main(void) {
    //Max int: 2147483647
    //show_bytes((byte_pointer) "12345", 6);
    // exercise1();
    //test_show_bytes(1234);
    const char *s = "abcdef";
    show_bytes((byte_pointer) s, strlen(s));
}
