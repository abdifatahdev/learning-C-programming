#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Hello World from C.\n");

    // If you don't wanna use _Bool, you can use bool but
    // you have import #include <stdbool.h> libary at the top of your file.
    // Also if you use _Bool, you can only use/assign the value of 1 or 0.
    _Bool a = 0;

    bool b = true;

    printf("%d\n", a);

    printf("%d\n", !b);

    return 0;
}
