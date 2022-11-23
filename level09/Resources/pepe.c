#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int i=0, fd=0;
    char str[1];
    if (ac==2)
    {
        fd = open(av[1], O_RDONLY);
        while (read(fd, str, 1))
        {
            printf("%c", str[0] - i);
            i++;
        }
        printf("\n");
    }
    return 0;
}