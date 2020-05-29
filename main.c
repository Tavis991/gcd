#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "fun.h"
#include "readnums.h"
#include "gcdbunch.h"

int main(int argc, char* argv[]) {
    //calculating GCD & LCM of an array of command line inserted integers recursively
    if (argc<3) {  printf("2 or more arguments for program");
        exit(1);}
    for (int i=1;i<argc;i++)
        for (int j=0; argv[i][j] != '\0'; j++){
            if (!isdigit(argv[i][j])){
                printf("only numbers in program");
                exit(1);
            }
        }
    int* argnum = readnums(argc, argv);
    int * modstuffs;
    modstuffs=gcdbunch(argc, argnum);
    printf("gcd is %d \nlcm is %d\n",*modstuffs , *(modstuffs+1));
    free(argnum);
    return 0;

}



