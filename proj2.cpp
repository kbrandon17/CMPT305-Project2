#include <stdio.h>
#include <stdlib.h>
#include <string>

int main(int argc, char argv[]) {
    if (argc != 5) {
        printf("Incorrect number of arguments provided. Exiting now!\n");
        exit(1);
    }

    std::string traceFileName = "test";
    int startInstruction = argv[2];
    int instructionCount = argv[3]; 
    int pipelineWidth = argv[4];

    return 0;
}