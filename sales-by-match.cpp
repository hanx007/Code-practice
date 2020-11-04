#include <bits/stdc++.h>

using namespace std;


int sockMerchant(int n, vector<int> ar) {
    int count=0;
    for(int i=0;i<n;i++){
        if (ar[i]!=0){
            for(int k=i+1;k<n;k++){
                if(ar[i]==ar[k]){
                //cout<<ar[i]<<ar[k]<<endl;
                 count++;
                 ar[k]=0;
                 break;
                }   
            
            }
        }
    }
return count;
}

int main()
{

    int n;
    cin >> n;

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split_string(ar_temp_temp);

    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
        int ar_item = stoi(ar_temp[i]);

        ar[i] = ar_item;
    }

    int result = sockMerchant(n, ar);

    fout << result << "\n";

    fout.close();

    return 0;
}

