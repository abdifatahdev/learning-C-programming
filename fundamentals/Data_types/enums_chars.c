#include <stdio.h>
#include <stdbool.h>

// but we can create a macro
#define formatBool(b) ((b) ? "true" : "false")

int main()
{
    enum primary_colors
    {
        red,
        green,
        blue
    };

    enum primary_colors my_color, your_color;

    my_color = red; // prints 0 coz enum starts from  index 0
    your_color = green;
    printf("My favorite color is %d.\n", my_color);

    // Another example (note enum here starts at index 0)
    enum month
    {
        Jan,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Jul,
        Aug,
        Sep,
        Oct,
        Nov,
        Dec
    };
    enum month my_month, your_month;

    // + 1 coz enum starts at index 0
    my_month = Dec + 1;

    printf("My month is: %d.\n", my_month);

    // Enums as ints
    enum direction
    {
        up,
        down,
        left = 10,
        right
    };

    enum direction my_direction, your_direction, their_direction, our_direction;

    my_direction = up;      // 0
    your_direction = down;  // 1
    their_direction = left; // 10
    our_direction = right;  // 11

    printf("My direction is: %d.\n", my_direction);
    printf("Your direction is: %d.\n", your_direction);
    printf("Their direction is: %d.\n", their_direction);
    printf("Our direction is: %d.\n", our_direction);

    // Another enum example

    enum gender
    {
        male,
        female
    };
    enum gender my_gender;

    my_gender = male;

    enum gender another_gender = female;
    bool is_male = (my_gender == another_gender);

    printf("%i.\n", is_male);
    printf("%s.\n", formatBool(is_male));

    return 0;
}
