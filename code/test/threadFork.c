#include "syscall.h"
void forked(int a)
{
    int output;
    char *cr = ".From the Forked Function";
    ConsoleWrite(cr, 8);
}
int main()
{
    char *fr = "Forked", *yl = "Yielded";
    ConsoleWrite(fr, 5);
    ThreadFork(forked);
    ConsoleWrite(yl, 5);
    Halt();
}