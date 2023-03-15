#include <iostream>
using namespace std;

int UniqueElement(int arr[], int n){

    int ans = 0;
    for (int i=0; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    cout << "Enter the size of an array: " << endl;
    int n;
    cin >> n;

    int arr[100];

    cout << "Enter the elements: " << endl;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = UniqueElement(arr, n);
    cout << "Unique Element is: " << ans << endl;  


    return 0;
}