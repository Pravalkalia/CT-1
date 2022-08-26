//Name : Praval kalia
//Roll_No : 2010990547
//Set_Name : 03
//find the pair with the given sum in array

#include <bits/stdc++.h>
using namespace std;
void Find_pairnow(int arr[], int n, int k)
{
   unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        if (map.find(k - arr[i]) != map.end())
        {
            cout << "Pair found (" << arr[map[k - arr[i]]] << ", "
                 << arr[i] << ")\n";
            return;
        }
        map[arr[i]] = i;
    }
    cout << "Pair not found";
}
int main()
{
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"input the elm of array = ";
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int target;
    cout<<"input sum:";
    cin>>target;
    
    Find_pairnow(arr,n,target);

    return 0;
}