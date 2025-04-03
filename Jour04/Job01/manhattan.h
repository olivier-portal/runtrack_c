#ifndef MANHATTAN_H
#define MANHATTAN_H

typedef struct point
{
    double x;
    double y;

} point;

//MAcro ABS(x)
#define ABS(x) ((x) < 0 ? -(x) : (x))

int manhattan(point a, point b);

#endif