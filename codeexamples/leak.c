#include <stdlib.h>

void allocate() 
{
    int* a = malloc(sizeof(int) * 100); // Allocate memory on the heap
    // Return and forget about the allocated memory!
}

int main()
{
    allocate();
    // ...
    // do more stuff, while heap space that allocate used is unreachable
}
