//Read contents of a text file.

#include <stdio.h>

int main() 
{   
    FILE *file;
    char text[300];
    file = fopen("test.txt","r");
    fscanf(file, "%s", text);
    printf("%s", text);
    fclose(file);
    return 0;
}