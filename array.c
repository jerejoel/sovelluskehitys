
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    srand (time(NULL));
    int myInts [25];
    int i;
    int size = sizeof(myInts) / sizeof(myInts[0]);
    
    for (i = 0; i < size; i++)
    {
        myInts[i] = rand() % 100 + 1;
    
    }
    
    for (i = 0; i < size; i++)
    {
    printf("Random number is #%d: %d\n", i, myInts[i]);
    }
    
    system("PAUSE");
    return 0;
}
