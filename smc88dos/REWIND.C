#define NOCCARGC  /* no argument count passing */
/*
** Rewind file to beginning. 
*/
rewind(fd) int fd; {
  return(seek(fd, 0, 0, 0));
  }

                                                                                                          