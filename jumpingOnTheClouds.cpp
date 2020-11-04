#include <bits/stdc++.h>

using namespace std;


int jumpingOnClouds(vector<int> c,int n) {
    int count=0;

    for(int i=0;i<n-1;i+=2,count++){
        if(c[i]==1)
            i--;   
        
    }
    
    return count;
}

int main()
{

    int n;
    cin >> n;

    vector<int> c(n);

    for (int i = 0; i < n; i++) {
       cin>>c[i];
    }

    int result = jumpingOnClouds(c,n);

    fout << result << "\n";

    fout.close();

    return 0;
}

