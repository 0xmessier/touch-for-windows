#include <stdio.h>

bool createEmptyFile(char *fileName){
    FILE *file = fopen(fileName, "w"); // Open the file for writing
    if (file != nullptr) {
        //do something here (if u want)
        fclose(file); // Close the file
        printf("Touched, %s\n", fileName);
        return true;
    }
    
    printf("Error: The file cannot be created.\n");
    return false;
}

int main(int argc, char *agrv[]){
    if(argc < 2){
        printf("Usage:\n\ttouch [filename]\n\n");
        //getchar();
        return -1;
    }

    createEmptyFile(agrv[1]);
    return 0;
}