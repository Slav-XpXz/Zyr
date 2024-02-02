#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv[]){
    FILE* input_file;
    if(argc<2){
        fprintf(stderr, "Error: No input files!");
        return 1;
    }
    input_file = fopen(argv[2], "r");
    if(input_file==NULL){
        fprintf(stderr, "Error: file could not be opened!");
        return 1;
    }

    return 0;
}