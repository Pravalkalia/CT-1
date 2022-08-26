//Name : Praval kalia
//Roll_No : 2010990547
//Set_Name : 03
//q name : Rearrange an array with alternate high and low element
#include <bits/stdc++.h>
using namespace std;
void altmiddle(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i - 1] > arr[i]) {
            swap(arr[i - 1],arr[i]);
        }
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swap(arr[i + 1],arr[i]);
        }
    }
}
int main()
{
    int p;
    cout<<"Enter the No of elments = ";
    cin>>p;
    int arr[p];
    cout<<"input elments of the array = ";
    for(int i=0;i<p;i++){
        cin>>arr[i];
    }
    
    altmiddle(arr,p);
    for(int i=0;i<p;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

