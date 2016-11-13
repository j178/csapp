//
// Created by johnj on 11/13/16.
//
void inplace_swap(int *x, int *y);

void reverse_array(int *a, int len) {
    int first = 0, last = len - 1;
    //fix: 判断条件由 <= 改为 <
    for (; first < last; first++, last--) {
        inplace_swap(a + first, a + last);
    }
}