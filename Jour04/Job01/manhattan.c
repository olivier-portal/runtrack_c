#include "manhattan.h"

int manhattan(point a, point b)
{
    return (int)(ABS(a.x - b.x) + ABS(a.y - b.y));
}