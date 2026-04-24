#include <stdio.h>

int main() {

    char arr[] = "hello";
    char *p = "gello";

    arr[0] = 'H';
    printf("%s\n", arr);

    p = "Hello";
    printf("%s\n", p);

    return 0;
}