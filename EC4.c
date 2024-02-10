#include <stdio.h>
#include <time.h>
int rollDice(int rolls, int sides) {
    int sum = 0;
    for (int i = 0; i < rolls; i++) {
        int roll = rand() % sides + 1;
        sum += roll;
    }
    printf("%d", sum);
    return sum;
}

int main() {
    srand(time(NULL));

    char input[1000];
    int left = 0, right = 0;
    int i = 0;

    scanf("%s", input);
    while (input[i] != 'd') {
        left = left * 10 + (input[i] - '0');
        i++;
    }
    i++;
    while (input[i] != '\0') {
        right = right * 10 + (input[i] - '0');
        i++;
    }
    int result = rollDice(left, right);
    return 0;
}
