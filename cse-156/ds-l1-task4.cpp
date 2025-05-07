#include <stdio.h>
int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    int arr[M], brr[N], crr[M + N];
    for(int i = 0; i < M; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < N; i++)
        scanf("%d", &brr[i]);
    int i = 0, j = 0, k = 0;
    while(i < M && j < N)
    {
        if (arr[i] < brr[j])
        {
            crr[k] = arr[i];
            i++;
        }
        else
        {
            crr[k] = brr[j];
            j++;
        }
        k++;
    }
    while(i < M)
    {
        crr[k] = arr[i];
        i++, k++;
    }
    while(j < N)
    {
        crr[k] = brr[j];
        j++, k++;
    }
    for(int i = 0; i < M + N; i++)
        printf("%d ", crr[i]);
    printf("\n");
    return 0;
}
