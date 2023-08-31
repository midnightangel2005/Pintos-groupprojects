#include <stdio.h>
#include <syscall.h>

int
main (void)
{
    printf("Hello, World\n");
    halt();
 
    return EXIT_SUCCESS;

}
