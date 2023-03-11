#include <iostream>
using namespace std;
void SelectionSort(int arr[],int length)
{
    for (int i = 0;i < length-1;i++) {
        int smallest = arr[i];
        int index=i;
        int key = arr[i];
        for (int j = i + 1;j < length;j++)
        {
            if (smallest > arr[j])
            {
                smallest = arr[j];
                index = j;              
            }
        }
        arr[i] = smallest;
        arr[index] = key;
    }
}
void PrintArray(int arr[], int length)
{
    for (int i = 0;i < length;i++)
    {
        cout << arr[i] << " ";
   }
    cout << endl;
 
}

int main()
{
    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
    int length = sizeof(arr) / sizeof(int);
    SelectionSort(arr, length);
    PrintArray(arr,length);
  
}
