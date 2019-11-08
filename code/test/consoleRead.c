#include "syscall.h"

int main()
{
    int result;
    char *buffer;
    result = ConsoleRead(buffer, 15);
    //ConsoleWrite(buffer, 15);
    ConsoleWrite("Read called from ConsoleRead ", 28);
    Halt();
    /* not reached */
}