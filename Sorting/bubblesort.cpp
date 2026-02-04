// 04/02/2026 21:16
#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>& a){
    int n = a.size();
    bool s;

    for(int i = 0; i < n - 1; i++){
        s = false;
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                s = true;
            }
        }
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

    for(int i : a){
        cout << i << (char)32;
    }
    return 0;
}
