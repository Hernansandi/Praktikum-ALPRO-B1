void printArr(int arr[], int n) 
{
//Kamus Lokal
    int i;

//Algoritma
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) 
{
//Kamus Lokal
    int Temp;

//Algaritma
    Temp = *a;
    *a = *b;
    *b = Temp;
}