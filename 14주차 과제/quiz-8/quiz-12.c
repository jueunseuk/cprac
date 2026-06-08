#include <stdio.h>

typedef struct {
    int value;
    char suit;
} Card;

int main() {
    Card cards[52];

    char suits[] = { 'c', 'd', 'h', 's' };
    int values[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };

    int cardIndex = 0;
    for (int suitIndex = 0; suitIndex < 4; suitIndex++) {
        for (int valueIndex = 0; valueIndex < 13; valueIndex++) {
            cards[cardIndex].value = values[valueIndex];
            cards[cardIndex].suit = suits[suitIndex];
            cardIndex++;
        }
    }

    for (int i = 0; i < 52; i++) {
        printf("%c %d", cards[i].suit, cards[i].value);
    }
    return 0;
}