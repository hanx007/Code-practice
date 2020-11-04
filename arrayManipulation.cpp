#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

long arrayManipulation(int n, vector<vector<int>> queries,int m) {
    long  *ar=new long [n+2];
    long  sum=0,max=0;
   for(int i=0;i<m;i++){
       int a= queries[i][0];
       int b=queries[i][1];
       int k=queries[i][2];
       ar[a]+=k;
       ar[b+1]-=k;
   }
   for(int l=0;l<n;l++){
    sum+=ar[l];//prefix sum algorithm
    if(sum>max)
        max=sum;
   }
    return max;
}

int main()
{

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    vector<vector<int>> queries(m);
    for (int i = 0; i < m; i++) {
        queries[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }

    }

    long result = arrayManipulation(n, queries,m);

    fout << result << "\n";

    fout.close();

    return 0;
}


