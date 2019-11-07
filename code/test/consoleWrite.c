#include "syscall.h"

int main()
{
    int result;

    result = ConsoleWrite();

    Halt();
    /* not reached */
}