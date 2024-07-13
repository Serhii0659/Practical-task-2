#include <stdio.h>
#include <conio.h>

// Найбільший спільний дільник
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Найменше спільне кратне
int lcm(int a, int b) {
    return a * (b / gcd(a, b));
}

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
    printf("\n");

    // Розрахунок НСК для всіх введених чисел
    int result = numbers[0];
    for (int i = 1; i < amount; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("The Least Common Multiple is: %d\n", result);

    printf ("Press any key to exit the program.");
    getch ();
    return 0;
}
// Зміна в проєкті
// Зміна тільки в гілці New branch