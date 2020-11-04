#include <bits/stdc++.h>

using namespace std;

vector<int> rotateLeft(int d, vector<int> arr,int n) {
     vector<int> arr2(n);
    for(int i=0;i<n;i++){
        arr2[(i+n-d)%n]=arr[i];// for right rotation : (i+d)%n
        
    }
    return arr2;
}

int main()
{
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int d = stoi(first_multiple_input[1]);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = rotateLeft(d, arr,n);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

