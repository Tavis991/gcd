#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void swap(int *a, int *b);
int gcdrec(int n1, int n2);

int main(int argc, char* argv[]) {

    if (argc!=3) {  printf("2 arguments for program");
        exit(1);}
    for (int i=1;i<argc;i++)
        for (int j=0; argv[i][j] != '\0'; j++){
            if (!isdigit(argv[i][j])){
                printf("only numbers in program");
                exit(1);
            }
        }

    int n1= atoi(argv[1]);
    int n2= atoi(argv[2]);
    int gcd;
    if (n1<n2){swap(&n1,&n2);}
    gcd=gcdrec(n1,n2);
    printf("gcd is %d \nlcm is %d\n",gcd , n1*n2/gcd);
    return 0;

}



