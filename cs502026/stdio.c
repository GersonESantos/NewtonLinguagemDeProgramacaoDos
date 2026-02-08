#include <stdio.h>

int main(void)
{
    char *s = "This is CS50";
    printf("%s\n", s);

    int i = 50;
    printf("This is CS%i\n", i);

    float f = 50.0;
    printf("This is CS%.0f\n", f);
}