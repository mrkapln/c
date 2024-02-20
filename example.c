#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

int main(int argc, char const *argv[]) {
    if (argc < 4) printf("Error: Trenger tre argumenter.\n");
    else printf("arg1: '%s', arg2: '%s', arg3: '%s'\n", argv[1], argv[2], argv[3]);
    return 0;
}

*/

/*

void print_size(char arr[])
{
    printf("%ld\n", sizeof(arr));
}

int main(void)
{
    char array[50];
    printf("%ld\n", sizeof(array));
    print_size(array);
    return 0;
}

*/

/*
int main(void)
{
    char *tekst = malloc(5);
    if (tekst == NULL)
        return EXIT_FAILURE;
    tekst[0] = 'C';
    tekst[1] = 'b';
    tekst[2] = 'r';
    tekst[3] = 'a';
    tekst[4] = '\0';
    printf("%s\n", tekst);
    free(tekst);
    return EXIT_SUCCESS;
}

*/

int main(void)
{
    int *peker;
    peker = malloc(sizeof(int));
    *peker = 10;
    printf("pekeren peker på adressen %p\n", peker);
    printf("pekeren ligger på adressen %p\n", &peker);
    *peker += 5;
    free(peker);
    return 0;
}

char *getCopy(char *original)
{
    char *copy = malloc(strlen(original) + 1); // gjort om
    for (int i = 0; i < strlen(original) + 1; i++)
    {
        copy[i] = original[i];
    }
    return copy;
}