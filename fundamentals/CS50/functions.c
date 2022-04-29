#include <stdio.h>

// Declair meow func (prototype)
void meow(int n);
float discounts(float price, int percentage);

int main(void)
{
    meow(3);

    float regular = printf("Regular price: ");
    scanf("%f", &regular);

    float percent_off = printf("Percent off: ");
    scanf("%f", &percent_off);

    float sale = discounts(regular, percent_off);
    printf("Sale Price: %.2f\n", sale);
}

// Define/implement meow() func down the main() func

// 1st void means func doesn't return anything
// 2nd void means func doesn't take any parameter void meow(void)
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow.\n");
    }
}

// printf();

// func that returns something
float discounts(float price, int percentage)
{
    return price * (100 - percentage) / 100;
}