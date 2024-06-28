#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* toss_coin() {
    return rand() % 2 == 0 ? "Heads" : "Tails";
}

int main() {
    srand(time(0));

    char name[100];
    printf("Who are you? \n> ");
    scanf("%99s", name);
    printf("Hello, %s!\n", name);

    printf("Tossing a coin...\n");
    int heads_count = 0;
    int tails_count = 0;

    for (int i = 0; i < 3; i++) {
        const char* result = toss_coin();
        printf("Round %d: %s\n", i + 1, result);
        if (result[0] == 'H') {
            heads_count++;
        } else {
            tails_count++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);

    return 0;
}
