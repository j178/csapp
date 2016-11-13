//
// Created by johnj on 11/13/16.
//

//利用 a^a = 0 的特性来实现不用临时变量地交换两个值
//这样的做法并没有性能优势， 只是一个智力游戏
void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}