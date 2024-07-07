#include <stdio.h>

int main () {
    int amount;
    do {
        printf("Enter the amount of numbers\n");
        scanf("%d", &amount);
        if (amount < 2 || amount > 20) {
            printf ("The amount of numbers cannot be less than 2 or more than 20\n");
        }
    } while (amount < 2 || amount > 20);
    int numbers[amount];
    printf("Enter %d numbers separated by spaces: ", amount);
    
    for (int i = 0; i < amount; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Numbers: ");
    for (int i = 0; i < amount; i++) {
        printf("%d ", numbers[i]);
    }
    // Вхідні дані: в першому рядку задано кількість чисел р(2 ≤ р ≤ 20), а в другому рядку р натуральних чисел, розділені пробілом
    // Вихідні дані: найменше спільне кратне заданих чисел
    return 0;
}