#include <stdio.h>
#include <string.h>

void substring(char *source, int start, int length, char *result) {
    if (start < 0 || start >= strlen(source) || length < 0 || (start + length) > strlen(source)) {
        printf("Invalid start position or length.\n");
        return;
    }

    strncpy(result, source + start, length);
    result[length] = '\0';
}

int main() {
    char source [100];
    printf("Enter the string : ");
    fgets(source, sizeof(source), stdin);
    char result[100];
    int start, length;
    printf("Enter the start-point and length of substring :");
    scanf("%d%d", &start, &length);

    substring(source, start, length, result);
    printf("Extracted substring: %s\n", result);

    return 0;
}