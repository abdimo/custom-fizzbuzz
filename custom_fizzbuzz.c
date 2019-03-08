#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    if (argc !=  3)
    {
        fprintf(stderr, "You need to give 2 arguments\n");
        return 1;
    }

    for ( int i = 1; i<=100; i++)
    {
        if (i%15==0)
            printf("%s%s\n",  argv[1], argv[2]);
        else if (i%3==0)
            printf("%s\n", argv[1]);
        else if (i%5==0)
            printf("%s\n", argv[2]);
        else
            printf("%i\n", i);
    }

    return 0;

}

