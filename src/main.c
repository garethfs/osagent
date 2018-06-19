#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

main(){
    int fh;
    fh=open("/etc/os-release",O_RDONLY);

    close(fh);
}