#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <dirent.h>
#include "../include/exit.h"

int exit_validate(int argc, char** args){
    return 1;
}

int exit_execute(int argc, char** args){
    printf("$_>\n");
    return 0;
}
