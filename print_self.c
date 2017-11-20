#include <stdio.h>

int main()
{
    int c;
    FILE *file;
    file = fopen("print_self.c", "r");
    if (file)
    {
        while ((c=getc(file)) != EOF)
        putchar(c);
        fclose(file);
    }
    return 0;
}
