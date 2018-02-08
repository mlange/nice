#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    long value;

    value = nice(0);
    value += 20;

    printf("Current Nice Value: %ld\n", value);

    value = nice(10);
    value += 20;

    printf("Current Nice Value: %ld\n", value);

    exit(0);
}
