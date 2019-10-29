int v[10], i, j;

int main()
{
    for(i=0; i<10; i++)
    {
        scanf("%d", &v[i]);
    }
    insertion_sort(v, 10);
    for(i=0; i<10; i++)
    {
        print("%d", v[i]);
    }

    return 0;
}

int insertion_sort (int v[], int size)
{
    int i, j, elect;
    for(i=1; i<size-1; i++)
    {
        elect = v[i];
        j = i-1;
        while ((j>=0) && (elect < v[j]))
        {
            v[j+1] = v[j];
            j = j-1;
        }
        if(j!=(i-1))
        {
            v[j+1] = elect;
        }
    }
}