#include <stdio.h>
#include "manhattan.h"

int main()
{
    point p1 = {1.0, 2.0};
    point p2 = {4.0, 6.0};

    int dist = manhattan(p1, p2);
    printf("Manhattan distance is : %d\n", dist);

    return 0;
}
