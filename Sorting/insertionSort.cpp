#include <bits/stdc++.h>
using namespace std;
// sorting function
void insertionSort(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                int z = a[i];
                a[i] = a[j];
                a[j] = z;
            }
        }
    }
}
int main(){
    // Array input
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // process insertion sort
    insertionSort(a, n);

    // Array output
    for(int i = 0; i < n; i++){
        cout << a[i] << (char)32;
    }
    return 0;
}
