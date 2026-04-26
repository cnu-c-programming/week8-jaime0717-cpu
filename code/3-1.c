#include <stdio.h>
#include <string.h>

int main()
{

    char *names[] = {"apple", "mango", "ant", "banana", "cat", "anaconda"};
    int n = sizeof(names) / sizeof(names[0]);

    // 버블정렬
    char* temp;

    for (int i = n-1; i > 1; i--) 
    {
        for(int j = 0; j<i; j++) {
            if(strcmp(names[i], names[j])<0) { //부호주의 
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    // 여기까지 수정

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}