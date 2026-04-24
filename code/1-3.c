#include <stdio.h>

char *my_strcat(char *dst, const char *src)
{
    for (int i = 0; i < 20; i++)
    {
        if (*dst == '\0')
        {
            //*dst = *src; //네가 그렇게 중요하니? 왜 *++dst = *++src는 안됐지?

            while (*src != '\0')
            {
                *dst++ = *src++;
            }

            return 0;
        }
        ++dst;
    }
}
int main()
{
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("%s\n", str1);
    my_strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}