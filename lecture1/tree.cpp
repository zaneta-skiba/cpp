#include <stdio.h>

int main(void){
    int n;

    //prompt for height
    do
    {
        printf("Height: ");
        scanf("%d", &n);
    }
    while (n < 1 || n > 8);

    // building the wall
    for (int i = 0; i < n; i++)             
    {

        for (int k = i + 1; k < n; k++)    
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)  
        {
            printf("#");
        }
        for (int m = 0; m < i + 1; m++)
        {
            printf("#");                 
	}

        printf("\n");
    }
}
