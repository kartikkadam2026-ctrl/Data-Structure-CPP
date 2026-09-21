#include <iostream>
#include <algorithm>
using namespace std;

//---------Binary Search--------
//Precondition; arr[] must be sorted in ascending order

int BinarySearch(int arr[], int n, int key){
    int low = 0, high = n-1;
    while(low <= high )
    {
        int mid = low+(high - low)/2;
        if(arr[mid] == key){
            return mid; // ID found at index mid

        }
        else if(arr[mid] < key){
            low = mid + 1; //search right half

        }
        else{ 
            high = mid - 1; //search left half


        } 
    }
    return -1; // ID not found


}

int main(){
    int n;
    cout<<"Enter number of customer account ID's";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" customer account ID's:\n";
    for(int i=0; i<n;  i++){
        cin>>arr[i];
    }

    //Binary Search requires a sorted array
    
    sort(arr, arr + n);


    cout<<"\nSorted list of ID's:";
    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
    cout<<endl;

    int key;
    cout<<"Enter coutomer account ID to search:";
    cin>>key;

    int BinIndex = BinarySearch(arr,n,key);
    if(BinIndex != -1){
        cout<<"\n[Binary Search] ID"<<key<<" found at index"<<BinIndex<<" (in sorted list)"<<endl;

    }
    else{
        cout<<"\n[Binary Search] ID"<<key<<" not found."<<endl;

        return 0;
    }

}