#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

main(){
   fh=open("/etc/os-release",O_RDONLY);

   close(fh);
}