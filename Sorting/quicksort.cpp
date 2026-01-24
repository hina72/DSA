// 21:41 23/01/2026
#include <bits/stdc++.h>
using namespace std;

int prt(vector<int>& a, int l, int r){
    // choose pivot
    int pivot = a[r];
    int i = l - 1;
    for(int j = l; j < r; j++){
        if(a[j] < pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
}
void quicksort(vector<int>& a, int l, int r){
    if(l < r){
        int p = prt(a, l, r);
        quicksort(a, l, p - 1);
        quicksort(a, p + 1, r);
    }
}
int main(){
    vector<int> a;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        a.push_back(t);
    }
    quicksort(a, 0, n - 1);

    for(int i : a){
        cout << i << " ";
    }
    return 0;
}
