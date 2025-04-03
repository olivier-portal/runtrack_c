#include <stdio.h>
#include "print_album.h"

void print_album(album *a);


int main()
{
    album a = {"Master of Puppets", "Metallica", 1986};
    print_album(&a);

    return 0;
}