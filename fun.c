//
// Created by tuli on 18/05/2020.
//

int gcdrec(int n1, int n2){
    int temp=n2;

    if (temp<1){
        return n1;
    }
    if (temp==1){
        return 1;
    }

    n2=n1%n2;
    n1=temp;
    return gcdrec(n1,n2);

}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}