#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>

int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(1);
    }

    int fd = open(argv[1], O_RDONLY);

    int n = 1024;
    char buf[n];
    while (read(fd, buf, n) > 0 ) {
        fprintf(stdout, "%s", buf);
        // int r = write(fd, buf, n);
        // (void) r;
    }
    close(fd);




    // FILE* infile = fopen(argv[1], "r");

    // if(!infile) {
    //     fprintf(stderr, "Error - %i\n", errno);
    //     exit(errno);  
    // }

    // int n = 1024;
    // char buf[n];
    // memset(buf, 0, sizeof(buf));

    // while (fscanf(infile, "%s\n", buf) != EOF){
    //     fprintf(stdout, "%s", buf);
    // }
    // fread(buf, 1, n, infile);
    // fclose(infile);
}
