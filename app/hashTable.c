#include "sha3.h"

int main(int argc, char **argv){
    char* hash;
    char *nameFile = argv[1];
    hash = sha3sum(nameFile,256);

    printf("%s\n", hash);
}

