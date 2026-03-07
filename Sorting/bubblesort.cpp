// 04/02/2026 21:16
// see animation: https://hina72.github.io/sorting-animation/
#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>& a){
    int n = a.size();
    bool s; // check if array is sorted

    for(int i = 0; i < n - 1; i++){
        s = false;
        for(int j = 0; j < n - i - 1; j++){
            // swap if the next element is less in value
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                s = true;
            }
        }
        // if there is no swap, that's mean the sorting is complete
        if(!s){
            break;
        }
    }
}
int main(){
    vector<int> a;
    int n;
    cin >> n;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        a.push_back(x);
    }
    bubblesort(a);

    // print out the sorted array
    for(int i : a){
        cout << i << (char)32;
    }
    return 0;
}
