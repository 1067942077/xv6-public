#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  if(argc <= 1){
    printf(1, "need a pid.\n");
    exit();
  }

  int result = map(atoi(argv[1]));
  if(result == -1) {
	printf(1, "pid invalid\n");
  }
  exit();
}
