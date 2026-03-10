// hina72 23:09 Mar 10 2026
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& a, int n){
    for(int i = 0; i < n - 1; i++){
        int tmp = i; // the idea is to find the minimum value in the array
        // then exchange it with the (i) position, repeat that and the array will be sorted
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[i]){
                // mark the position
                tmp = j;
            }
        }
        swap(a[i], a[tmp]);
    }
}

int main(){
    // initialize
    vector<int> a;
    int n;
    cin >> n;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        a.push_back(x);
    }

    selectionSort(a, n);

    // print array
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
