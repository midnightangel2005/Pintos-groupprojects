#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H
#include "threads/thread.h"

void close_all_files (struct thread *t);
void syscall_init (void);

#endif
