#include <stdlib.h>

int main(void)
{
    char *p, *q;
    p = malloc(100);    // allocate some heap storage
    // do some work with p...
    free(p);            // Done with p now, so we free it
    q = malloc(100);    // Allocate a new object on the heap
    free(p);            // Whoops! Deallocate p's area in storage again,
                        // potentially destroying q
}
