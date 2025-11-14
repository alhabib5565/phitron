#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];           // proti partition er last element
    int pi = low;                    // partition index
    for (int i = low; i < high; i++) // end condition ta high-1 porjonto  dewar reson holo je high th index  er value tha jehetu pivot tai eita nijei nijer theke chuto hobe na.
    {
        if (arr[i] < pivot)
        {
            swap(arr[i], arr[pi]); // jehetu element ta pivot theke chuto tai left e move kore dilam
            pi++;                  // partition index er value bariye dilam karon ekta element already pivot er theke chuto pawa geche tai pivot er postion minimum ei element er pore hobe.
        }
    }
    swap(arr[high], arr[pi]); // interation shes hole pivot elememt ke tar perfect position e diye dilam
    return pi;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high) // eikhane ei condition ta keno dewa hoiche ebong eita eikhane ki role play korteche? amar ans: low and high partition er start end bujai. ekhon jodi low ebong high equal hoiye tahole toh partition e kuno element thakbe na sort korar moto tai condition diye thamiye dewa hocche.
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
    vector<int> arr = {10, 7, 2, 9, 1, 5}; // {1, 2, 5, 7, 9, 10}
    int n = arr.size();
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// protita partition er shes pivot element ta tar perfect postion e bose jabe karon loop theke joto gula chuto element ache pibot theke oigula already left e cole jabe. tai tar oviasliy pivot element er poision