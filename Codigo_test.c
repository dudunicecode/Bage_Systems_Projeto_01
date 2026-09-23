#include <stdio.h>
int main()
{
    printf("Numeros entre 500 e 1500 que divididos por 7\n deixam resto igual a 3:");
    for(int i=500;i<=1500;i++){
        if(i%7==3){
            printf("\n%d", i);
        }
    }
    return 0;
}

