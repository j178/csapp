//
// Created by johnj on 11/13/16.
//
int bis(int x, int m);
int bic(int x, int m);

int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
}

int bool_and(int x, int y) {
    int result = bic(x, ~y);
    return result;
}
