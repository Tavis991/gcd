//
// Created by tuli on 28/05/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int* readnums(int argc, char* argv[]) {
    int* argnum = (int*)malloc(sizeof(int)*(argc-1));
    if (!argnum){
        printf("memory allocation failed");
        exit(1);
    }

    for (int i=1; i<argc;i++) {
        argnum[i-1]=atoi(argv[i]);
    }

    return argnum;
}