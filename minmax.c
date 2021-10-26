#include <stdio.h>
#define MAX 50 

int maximum(int array[], int index, int len)
{
int max;

if(index >= len-2)
return (array[index] > array[index + 1]) ? array[index] : array[index + 1];

max = maximum(array, index + 1, len);

return (array[index] > max) ? array[index] : max;
}


int minimum(int array[], int index, int len)
{
int min;

if(index >= len-2)
{
return (array[index] < array[index + 1]) ? array[index] : array[index + 1];
}

min = minimum(array, index + 1, len);

return (array[index] < min) ? array[index] : min;
}

int main()
{
int array[MAX], N, max, min;
int i;
printf("Syötä arrayn koko: ");
scanf("%d", &N);
printf("Syötä luku ja paina enter: ",N);
for(i=0; i<N; i++)
{
scanf("%d", &array[i]);
}

max = maximum(array, 0,N);
min = minimum(array, 0,N);

printf("Pienin luku on: %d\n", min);
printf("Suurin luku on: %d\n", max);

return 0;
}