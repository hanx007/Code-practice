#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

//reversing array with reverse function
vector<int> reverseArray(vector<int> a) {
    reverse(a.begin(),a.end());
    return a;

}

int main()
{

    int arr_count;
    cin >> arr_count;

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> res = reverseArray(arr);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

