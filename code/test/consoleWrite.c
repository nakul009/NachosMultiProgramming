#include "syscall.h"

int main()
{
    int result;
    char *buffer;
    result = ConsoleRead(buffer, 15);
    result = ConsoleWrite("Write called from ConsoleWrite ", 30);
    Halt();
    /* not reached */
}