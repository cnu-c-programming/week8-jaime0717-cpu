#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    // 버블정렬
    char* temp;

    for (int i = argc; i > 2; i--)
    {
        for(int j = 1; j<i; j++) {
            if(strcmp(argv[i], argv[j])<0) {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
    }

    // 여기까지 수정




    for(int i = 1; i<argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}