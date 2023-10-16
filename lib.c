#include "header.h"
#include <stdlib.h>

Point * new_point(float x, float y){

    Point* p = (Point*) malloc(sizeof(Point));
    p->x = x;
    p->y = y;

    return p;
}
