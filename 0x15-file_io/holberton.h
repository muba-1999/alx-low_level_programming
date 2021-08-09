<<<<<<< HEAD
#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

=======
#include <stdio.h>
#include <stdlib.h>
#ifndef _MAIN_H
#define _MAIN_H
>>>>>>> 95cac02d9d60814aa79409a8771ca3adbecf0bab

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
