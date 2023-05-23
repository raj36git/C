// 5.WAP to sort some strings in dictionary order using user defined function having Pointer as argument.

#include <stdio.h>
#include <string.h>
void sortStrings(char **strings, int count) {
    char *temp;

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}

int main() {
    char *strings[] = {"Apple", "Orange", "Banana", "Grapes", "Kiwi"};
    int count = sizeof(strings) / sizeof(strings[0]);

    printf("Before sorting:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", strings[i]);
    }

    sortStrings(strings, count);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}


