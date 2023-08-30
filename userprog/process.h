#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"
#include "threads/synch.h"

typedef int pid_t;

//file status
enum fileLoadStatus
{
FILE_LOAD_SUCCESS,
FILE_LOAD_FAILED,
FILE_NOT_LOADED
};

//child process structure
struct process 
{
struct semaphore wait;
struct semaphore load;
struct list_elem elem;
pid_t pid;
int exit_code;
enum fileLoadStatus fileLoadStatus;
bool isAlive;
bool isWaited;

};

tid_t process_execute (const char *file_name);
int process_wait (tid_t);
void process_exit (void);
void process_activate (void);


#endif

