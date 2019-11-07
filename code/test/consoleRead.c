#include "syscall.h"

int main()
{
    int result;

    result = ConsoleRead();

    Halt();
    /* not reached */
}