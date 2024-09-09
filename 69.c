//Write into a text file.

#include <stdio.h>

int main() 
{   
    FILE *file;
    char text[300] = "hellobellojello";
    file = fopen("test.txt","w");
    fprintf(file, "%s", text);
    fclose(file);
    return 0;
}