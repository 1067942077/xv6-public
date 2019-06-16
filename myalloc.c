#include "types.h"
#include "stat.h"
#include "user.h"


int
main(int argc, char *argv[]) {
  int pid = getpid();   
  map(pid);
  
  char* m1 = (char*)myalloc(2 * 4096);
  char* m2 = (char*)myalloc(3 * 4096);
  char* m3 = (char*)myalloc(1 * 4096);
  char* m4 = (char*)myalloc(7 * 4096);
  char* m5 = (char*)myalloc(9 * 4096);

  myfree(m2);
  myfree(m4);
  
  map(pid);

  myfree(m1);
  myfree(m3);
  myfree(m5);

  exit();
}
