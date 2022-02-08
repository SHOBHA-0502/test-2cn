#include <iostream>
using namespace std;

void Merge(int array[], int si, int mid, int ei)
{
    // int n = (ei + si + 1);
    // int arr[n];
    // int i = 0;
    // int j = mid + 1;
    // int k = 0;
    
    // while (n--)
    // {
    //     if ((array[i] <= array[j]) && (i < mid + 1) && (j < n))
    //     {
    //         arr[k] == array[i];
    //         i++;
    //         k++;
    //     }
    //     else if ((array[j] <= array[i])&& (i < mid + 1) && (j < n))
    //     {
    //         arr[k] == array[j];
    //         j++;
    //         k++;
    //     }
        
    // }
    // for(int i =0 ; i<n ; i++){
    //         cout<<arr[i];
    //     }
    int n1 = mid -si +1;
    int n2 = ei- mid ;
    int a[n1] ;
    int b[n2] ;
    

    for(int i =0 ; i<n1; i++){
        a[i] = array[i +si];
    }
    for(int i =0 ; i<n2; i++){
        b[i] = array[mid+1 +i];
    }
    // for(int i =0 ; i<n1; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // for(int i =0 ; i<n2; i++){
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl ;
    int i =0 ;
    int j =0 ; 
    int k = si;
    while(i<n1 && j<n2){
        if(a[i] <b[j]){
            array[k] = a[i];
            k++;
            i++;

        }
        else{
            array[k]=b[j];
            k++;
            j++;
        }
    }
    while (i<n1)
    {
        array[k] = a[i];
            k++;
            i++;
    }
    while(j<n2)
    {
        array[k] = b[j];
            k++;
            j++;
    }




}

void Mergesort(int array[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = (si + ei) / 2;
    // cout<<"yes"<<"//";
    Mergesort(array, si, mid);
    Mergesort(array, mid + 1, ei);

    Merge(array, si, mid, ei);
}

int main()
{
    
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // cout << "yes sir ";
    int si = 0;
    int ei = n - 1;
    cout << "Sorted Array : ";
    Mergesort(array, si, ei);
    // cout << "Sorted Array : //";

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}