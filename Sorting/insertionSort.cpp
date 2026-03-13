#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        // key
        int k = a[i];

        int j = i - 1;
        // insert a[i] to the position x that a[x-1] < a[i] (to the begin position if x-1 < 0)
        while(j >= 0 && a[j] > k){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = k;
    }
}
int main(){
    // initializing and handle input
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    insertionSort(a, n);
    
    for(int i = 0; i < n; i++){
        cout << a[i] << (char)32;
    }
    return 0;
}
