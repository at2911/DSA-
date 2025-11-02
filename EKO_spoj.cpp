#include <iostream>
#include <vector>
using namespace std;
 
bool isPossible(vector<int>& arr, long long m, long long mid) {
    long long woodCollected = 0;
    for (int height : arr) {
        if (height > mid) {
            woodCollected += height - mid;
        }
        if (woodCollected >= m) return true; 
    }
    return false;
}
 
int main() {
    int n;
    long long m;
    cin >> n >> m;
    vector<int> tree(n);
 
    long long l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        cin >> tree[i];
        if (tree[i] > r) r = tree[i];
    }
 
    long long ans = 0;
    while (l <= r) {
        long long mid = l + (r - l) / 2;
        if (isPossible(tree, m, mid)) {
            ans = mid;  
            l = mid + 1; 
        } else {
            r = mid - 1; 
        }
    }
 
    cout << ans << endl;
    return 0;
}
 