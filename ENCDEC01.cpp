// https://www.codechef.com/ENDE2020/problems/ENCDEC01

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int maxx = *max_element(arr, arr+n);
        int minn = *min_element(arr, arr+n);
        if(maxx-minn<x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}