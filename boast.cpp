#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], less = 0, greater = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            int cnt_less = 0, cnt_greater = 0;
            for (int j = 0; j < n; j++) {
                if (a[j] <= a[i]) {
                    cnt_less++;
                } else {
                    cnt_greater++;
                }
            }
            if (cnt_less > cnt_greater) {
                less++;
            } else {
                greater++;
            }
        }
        cout << less << endl;
    }
    return 0;
}
