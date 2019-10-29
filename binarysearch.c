#include <stdio.h>

int tamanho = 10, num_proc, i, find;
int binarySearch(int number, int v[]);

int main()
{   
    int v[tamanho];
    printf("Digite o numero a ser procurado: \n");
    scanf("%d", &num_proc);
    printf("Digite os numeros que compoem o vetor: \n");
    for(i=0;i<tamanho; i++)
    {
        scanf("%d", &v[i]);
    }
    find = binarySearch(num_proc, v);
    printf("%d", find);
}

int binarySearch(int number, int v[])
{
    int i=0, achou = -1, inicio = 0, fim = tamanho-1, meio = (inicio + fim)/2;
    while(inicio <= fim && achou == -1)
    {
        i = v[meio];
        if(v[meio] == number)
        {
            achou = i;
        }
        else
        {
            if(number > v[meio])
            {
                i = meio + 1;
                inicio = meio + 1; 
            }
            else
            {
                i = meio - 1;
                fim = meio - 1;
            }
            meio = (inicio + fim)/2;
        }
        
    }
    return achou;
}