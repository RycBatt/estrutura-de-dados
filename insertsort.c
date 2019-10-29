#include <stdio.h>

int tamanho = 10, i, v[10];

void insertSort(int v[], int tamanho);

int main()
{
    printf("Digite os números que você deseja ordenar: ");

    for(i=0;i<tamanho;i++)
    {
        scanf("%d", &v[i]);
    }
    insertSort(v, tamanho);
    for(i=0;i<tamanho;i++)
    {
        printf("%d ", v[i]);
    }  
    return 0;
}

void insertSort(int v[], int tamanho)
{
    int i, j, nume;
    for(i=1; i<tamanho; i++)
    {
        nume = v[i];
        j = i-1;
        while (j>=0 && v[j]>nume)
        {
            v[j+1] = v[j];
            j = j-1;
        }
        v[j+1] = nume;
    }
}