#include <stdio.h>

int main(void)
{
    int a;
    double b;
    char c;
    char words[20];

    printf("Enter an integer number: ");  // prompt user for an integer
    scanf("%d", &a);
    printf("Your number in hexadecimal is %x (%#x)\n", a, a);

    printf("Enter a double number: ");  // prompt user for a double
    scanf("%lf", &b);
    printf("Your number is %E \n", b);

    printf("Enter one character: ");   // prompt user for one character
    scanf(" %c", &c);
    getchar();
    printf("Your character is %c and its value is equal to %d \n", c, c);

    printf("Enter your string consist of two words: ");
    fgets(words, sizeof(words), stdin);
    fputs(words, stdout);
    return 0;
}
