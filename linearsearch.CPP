#include <iostream>
#include <algorithm>
using namespace std;


     
    //--------linear search---------------
    //return index of key if found, else -1
    //works on the array in its original(unsorted) order
    int LinearSearch(int arr[], int n, int key)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i] == key)
            {
                return i; //ID found at index i
            }
        }
        return -1; //Id not found -1
    }

    int main(){
        int n;
        cout<<"enter number of customer account ID's:";
        cin>>n;
        int arr[n];
        cout<<"enter "<<n<<" customer account ID's:\n";

        for(int i=0; i<n; i++)
        {
             cin>>arr[i];
        }

        int key;
        cout<<"enter customer account ID's to search:";
        cin>>key;
        int LinIndex = LinearSearch(arr, n, key);

        if(LinIndex != -1)
        {
            cout<<"\n [Linear Search] ID "<<key<<" found at index" <<LinIndex<<endl;


        }else{
            cout<<"\n [Linear Search] ID "<<key<<" not found"<<endl;

        }
        return 0;

    }

    