#include <stdio.h>

int fib(int index);
int fib_rec(int index);

int main(int argc, char * argv[])
{
    
    printf("the 15th fib mumber is %d\n", fib(15));

    printf("this is the recursive fib\n");
    
    printf("the 15th fib_rec mumber is %d\n", fib_rec(15));

    (void)argc;
    (void)argv;

    return 0;
}


int fib(int index)
{
    int result = 0, num1 = 0, num2 = 1;

    if (1 >= index)
    {
        return index;
    }

    while (--index)
    {
        result = num1 + num2;
        num1 = num2;
        num2 = result;
    }

    return result;    
}

int fib_rec(int index)
{
    if (3 > index)
    {
        return 1;
    }

    return fib_rec(index-2) + fib_rec(index-1);
}