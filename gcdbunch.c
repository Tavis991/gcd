#include "fun.h"
#include "gcdbunch.h"
//
// Created by tuli on 29/05/2020.
//
int* gcdbunch(int argc, int* argnum){
    int lcm=1;

    while (argc>2)
    {
    int n1=*argnum;
    int n2=*(argnum+1);

    argnum[1]=gcdrec(n1,n2);
    lcm*=n1*n2/argnum[1];
    argnum++;
    argc--;
    }
    int gcd=gcdrec(*argnum, *(argnum+1));
    int* re;
    re[0]=gcd;
    re[1]=lcm;
    return (re);
    }
