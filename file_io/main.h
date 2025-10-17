#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/* Function prototype for the read_textfile task (optional, if needed) */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */

