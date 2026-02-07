#include <stdio.h>

// Color codes
#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define PURPLE "\033[1;35m"

int main() {
    int mood, choice;
    float a, b;

    printf("Choose your mood ??\n");
    printf("1. Happy ??\n");
    printf("2. Angry ??\n");
    printf("3. Sleepy ??\n");
    printf("4. Study ??\n");
    printf("5. Heartbroken ??\n");
    printf("Enter mood number: ");
    scanf("%d", &mood);

    // Mood themes
    switch (mood) {
        case 1:
            printf(GREEN "\nWelcome Happy Soul ??\n" RESET);
            break;
        case 2:
            printf(RED "\nAnger detected ?? Relax and calculate\n" RESET);
            break;
        case 3:
            printf(BLUE "\nSleepy mode ON ?? Calculating anyway...\n" RESET);
            break;
        case 4:
            printf(YELLOW "\nStudy Mode ?? Focus!\n" RESET);
            break;
        case 5:
            printf(PURPLE "\nBroken heart, strong brain ????\n" RESET);
            break;
        default:
            printf("Invalid mood, but okay ??\n");
    }

    printf("\nChoose operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (a == 0 || b == 0) {
        printf(PURPLE "\n?? Secret Mode Activated! Hacker vibes only ??\n" RESET);
    }

    switch (choice) {
        case 1:
            printf("Result = %.2f\n", a + b);
            break;
        case 2:
            printf("Result = %.2f\n", a - b);
            break;
        case 3:
            printf("Result = %.2f\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero not allowed ??\n");
            break;
        default:
            printf("Wrong choice ??\n");
    }

    printf("\nThanks for using Mood Calculator \n");
    return 0;
}

