/**************************************************************
 *
 * userprog/ksyscall.h
 *
 * Kernel interface for systemcalls 
 *
 * by Marcus Voelp  (c) Universitaet Karlsruhe
 *
 **************************************************************/

#ifndef __USERPROG_KSYSCALL_H__
#define __USERPROG_KSYSCALL_H__

#include "kernel.h"

void SysHalt()
{
  kernel->interrupt->Halt();
}
void SysConsoleRead(int address, int sz)
{
  char *s = "In Read call  ";

  for (int i = 0; i < sz; i++)
  {
    int number = (int)(s[i]);
    kernel->machine->WriteMem(i, 1, s[i]);
    address++;
  }
}

void SysConsoleWrite(int address, int character)
{
  //printf("SysWrite call | Writing to console with lenghth = %d ", &sz);
  //printf("System call write is initiated here\n");
  int i = 0;
  int incomingCharacter;
  while (i < character)
  {
    if (kernel->machine->ReadMem(address, 1, &incomingCharacter))
    {
      char str = char(incomingCharacter);
      std::cout << str;
    }
    address++;
    i++;
  }
}

int SysAdd(int op1, int op2)
{
  return op1 + op2;
}

#endif /* ! __USERPROG_KSYSCALL_H__ */
