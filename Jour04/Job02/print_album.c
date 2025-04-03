#include "print_album.h"
#include <stdio.h>

void print_album(album *a)
{
    printf("\"%s\" by \"%s\" released in %d.\n", a->albumName, a->band, a->year);
}