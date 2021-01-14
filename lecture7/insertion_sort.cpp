#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_numbers(int tab[], int arrSize);
void print_array(int tab[], int arrSize);
void insertion_sort(int tab[], int arrSize);

int main()
{
    int arrSize;
    
    printf("Size of an array: ");                     // prompt user for the size of the array
    scanf("%d", &arrSize);
    int *tab = (int *) malloc(arrSize *(sizeof(int)));    // I had to add (int *), because the c ++ compiler required it
    
    if (arrSize < 0)
    {
	  printf("The value should be positive!\n");
	  return 1;
    }
   
    generate_random_numbers(tab, arrSize);           
    print_array(tab, arrSize);
    insertion_sort(tab, arrSize);                    
    print_array(tab, arrSize);
    
    free(tab);
    return 0;
}

void print_array(int tab[], int arrSize)            // display array's elements on the screen
{
    for (int i = 0; i < arrSize; i++)
    {
       printf("%i\n", tab[i]);
    }
    printf("\n");
}

void generate_random_numbers(int tab[], int arrSize)       
{
    srand(time(NULL));
    
    for (int i = 0; i < arrSize; i++)
    {
        tab[i] = rand() % 100 + 1;                  // the array is filled with random numbers
    }
}

void insertion_sort(int tab[], int arrSize)
{
    int current_value;
    int next_value;
    int x;                 // x = i in for loop
    int temp = 0;          // temporary value
    
    for (int i = 0; i < arrSize - 1; i++)              
    {
        current_value = tab[i];
        next_value = tab[i+1];
        x = i;

        if (next_value < current_value)           // I know it's not perfect, but I created it myself
        {
            while (tab[x + 1] < tab[x])
            {
                temp = tab[x];
                tab[x] = tab[x + 1];
                tab[x + 1] = temp;
                --x;
                if (x < 0)                    
                {
                    break;
                }
            }
        }
        else
        {
            continue;
        }
    }
}
