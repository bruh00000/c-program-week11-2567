#include <stdio.h>
#include "add.c"
#include "sub.c"
#include "mul.c"
int addCall();
int subCall();
int mulCall();
void main()
{
    //addCall();
    //subCall();
    mulCall();
}

int mulCall(){
    mul();
    return 0;
}

int subCall(){
    sub();
    return 0;
}

int addCall(){
    add();
    return 0;
}

