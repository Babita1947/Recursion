#include<bits/stdc++.h>
using namespace std;

int printF(int ind, vector<int>& ds, int arr[], int n)
{
    int count = 0;
    if (ind == n)
    {
        // Uncomment the following lines if you want to print the subsequences
        // for (auto it : ds) {
        //     cout << it << " ";
        // }
        // if (ds.size() == 0) {
        //   cout << "{}";
        // }
        // cout << endl;
        count++;
        return count;
    }

    // Take or pick the particular index into the subsequence.
    ds.push_back(arr[ind]);
    count += printF(ind + 1, ds, arr, n);
    ds.pop_back();

    // Not pick or not take condition, this element is not added to your subsequences.
    count += printF(ind + 1, ds, arr, n);

    return count;
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    cout << "Count = " << printF(0, ds, arr, n);

    return 0;
}

