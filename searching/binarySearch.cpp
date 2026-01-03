//  17:40 Jan 3 2025, hina72
// Binary search algorithm
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int x){
    int l = 0, r = n - 1; // initializing l and r
    while(l <= r){
        // m is mid of l and r
        int m = l + (r - l) / 2;
        if(a[m] == x) return m;
        // when a[m] < x means l should be greater (and greater than m)
        if(a[m] < x){
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    // in case x is not in the array
    return -1;
}
int main(){
    // input ascending sorted array
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // input x
    int x;
    cin >> x;

    // process binary search
    cout << binarySearch(a, n, x);
    return 0;
}
