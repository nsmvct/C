#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 10;

    // Display the initial value of 'a' with a newline (\n)
    printf("Initial value of a: %d\n", a);

    // Prompt the user to enter a new number
    printf("Enter a new number: ");
    scanf("%d", &a);

    // Show the new value to confirm it was updated
    printf("The new value of a is: %d\n", a);

    return EXIT_SUCCESS;
}
