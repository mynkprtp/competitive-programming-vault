#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int overall_gcd = a[0];
        for (int i = 1; i < n; ++i) {
            overall_gcd = gcd(overall_gcd, a[i]);
        }
        
        bool has_gcd = false;
        for (int num : a) {
            if (num == overall_gcd) {
                has_gcd = true;
                break;
            }
        }
        
        if (has_gcd) {
            int count = 0;
            for (int num : a) {
                if (num != overall_gcd) {
                    count++;
                }
            }
            cout << count << '\n';
        } else {
            int min_operations = n; // Worst case: convert each element one by one
            for (int i = 0; i < n; ++i) {
                int current_gcd = a[i];
                for (int j = i + 1; j < n; ++j) {
                    current_gcd = gcd(current_gcd, a[j]);
                    if (current_gcd == overall_gcd) {
                        int operations = (j - i) + (n - 1); // Convert this segment to gcd, then others
                        if (operations < min_operations) {
                            min_operations = operations;
                        }
                        break;
                    }
                }
            }
            cout << min_operations << '\n';
        }
    }
    
    return 0;
}