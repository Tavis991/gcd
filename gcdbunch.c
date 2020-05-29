#include "fun.h"
#include "gcdbunch.h"
//
// Created by tuli on 29/05/2020.
//
int gcdbunch(int argc, int* argnum){
    if (argc<2){
        return (gcdrec(*argnum, *(argnum+1)));
    }
    while (argc>1)
    {
    int n1=*argnum;
    int n2 =*(argnum+1);
    argnum[1]=gcdrec(n1,n2);
    argnum++;
    argc--;
    }
    return (gcdrec(*argnum, *(argnum+1)));
    }
