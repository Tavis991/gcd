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
    int gcd=1;

    gcd=gcdbunch(argc, argnum);
    int mul= (argnum[argc-2]*argnum[argc-1]);
    printf("gcd is %d \nlcm is %d\n",gcd , mul/gcd);
    free(argnum);
    return 0;

}



