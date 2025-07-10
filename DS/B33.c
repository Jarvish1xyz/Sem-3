#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void sortString(char *str);
int isAnagram(char *a, char *b);

int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);
    getchar();  // consume leftover newline

    char words[n][100];
    printf("Enter words:\n");
    for (int i = 0; i < n; i++) {
        fgets(words[i], sizeof(words[i]), stdin);
        words[i][strcspn(words[i], "\n")] = '\0';
    }

    srand(time(0));
    int rnd = rand() % n;

    char b[100];
    printf("Enter word to check as anagram of \"%s\": ", words[rnd]);
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    if (isAnagram(words[rnd], b)) {
        printf("Yes, \"%s\" is an anagram of \"%s\".\n", b, words[rnd]);
    } else {
        printf("No, \"%s\" is not an anagram of \"%s\".\n", b, words[rnd]);
    }

    return 0;
}

void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }
    }
}

int isAnagram(char *a, char *b) {
    if (strlen(a) != strlen(b)) return 0;

    char x[100], y[100];
    strcpy(x, a);
    strcpy(y, b);

    sortString(x);
    sortString(y);

    return strcmp(x, y) == 0;
}
