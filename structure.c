#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

// structure, variable's grouping with same purpose

struct Personne
{
    int     age;
    char    firstLetter;
    bool    browsHaire;
};

int     main() {
    struct Personne p;

    printf("%d\n", p.age);

    return 0;
}
