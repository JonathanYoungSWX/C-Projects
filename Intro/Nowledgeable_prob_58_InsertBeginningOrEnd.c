#include <stdio.h>

void printArray(int size, int tab[]);
int getNumber();
char getPosition();
void insertEnd(int nb, int tab[], int size, int tab1[]);
void insertBeginning(int nb, int tab[], int size, int tab1[]);

int main() {
    int tab[] = {1, 2, 3, 4};
    int N = sizeof(tab) / sizeof(tab[0]);

    printArray(N, tab);

    int nb = getNumber();
    char p = getPosition();

    int tab1[N + 1];

    if (p == 'B' || p == 'b') {
        insertBeginning(nb, tab, N, tab1);
    } else if (p == 'E' || p =='e') {
        insertEnd(nb, tab, N, tab1);
    }

    printArray(N + 1, tab1);

    return 0;
}

void printArray(int size, int tab[]) {
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]); // Add a space after each element
    }
    printf("\n"); // Add a newline character at the end
}

int getNumber() {
    int nb;
    printf("Enter a number you want to add: ");
    scanf("%d", &nb);
    return nb;
}

char getPosition() {
    char c;
    printf("Choose where to add the number: B for beginning. E for end: ");
    scanf(" %c", &c); // Use %c and add a space before %c
    return c;
}

void insertEnd(int nb, int tab[], int size, int tab1[]) {
    for (int i = 0; i < size; i++) {
        tab1[i] = tab[i];
    }
    tab1[size] = nb;
}

void insertBeginning(int nb, int tab[], int size, int tab1[]) {
    tab1[0] = nb;
    for (int i = 0; i < size; i++) {
        tab1[i + 1] = tab[i];
    }
}

