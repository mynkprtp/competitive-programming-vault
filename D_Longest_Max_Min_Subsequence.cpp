#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

vector<int> findLongestSubsequence(const vector<int>& nums) {
    int n = nums.size();
    vector<int> best;
    set<int> seen;

    int left = 0, right = 0;
    while (right < n) {
        if (seen.count(nums[right]) == 0) {
            seen.insert(nums[right]);
            right++;
            if (right - left > best.size()) {
                best = vector<int>(nums.begin() + left, nums.begin() + right);
            } else if (right - left == best.size()) {
                // Check for lexicographically smaller subsequence
                bool is_smaller = false;
                for (int i = 0; i < best.size(); ++i) {
                    if (nums[left + i] < best[i]) {
                        is_smaller = true;
                        break;
                    } else if (nums[left + i] > best[i]) {
                        break;
                    }
                }
                if (is_smaller) {
                    best = vector<int>(nums.begin() + left, nums.begin() + right);
                }
            }
        } else {
            seen.erase(nums[left]);
            left++;
        }
    }

    // Alternate signs for lexicographical comparison
    for (int i = 0; i < best.size(); i += 2) {
        best[i] = -best[i];
    }

    return best;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    vector<int> ans = findLongestSubsequence(arr);
    cout<<ans.size()<<"\n";
    for(auto i:ans)
        cout<<abs(i)<<" ";
    cout<<"\n";
    return;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}