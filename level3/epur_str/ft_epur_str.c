#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    int pos = 0;
    int space = 0;
    if (argc == 2)
    {
        while (argv[1][pos] == ' ' || argv[1][pos] == '\t')
            pos++;
        while (argv[1][pos])
        {
            if (argv[1][pos] == ' ' || argv[1][pos] == '\t')
                space = 1;
            if (argv[1][pos] != ' ' && argv[1][pos] != '\t')
            {
                if (space == 1)
                {
                    write(1, " ", 1);
                    space = 0;
                }
                write (1, &argv[1][pos], 1);
            }
            pos++;
        }
    }
    write (1, "\n", 1);
    return (0);
}