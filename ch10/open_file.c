//
// Created by johnj on 11/10/16.
//

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void) {

    int fd = open("foo.txt", O_RDONLY, 0);
    close(fd);
}
