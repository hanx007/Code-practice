#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    
    long count=0,count2=0;
    long k=s.size();
    
    for(int i=0;i<k;i++){
            if(s[i]=='a')//a's in the string is counted
                count++;
            cout<<count<<endl;

    }
    
    for(int l=0;l<n%k;l++){
        if(s[l]=='a')//the pending a's of string in the specified n
            count2++;
        cout<<count2<<endl;
    }
    count=count*(n/k)+count2;
    return count;

    
    
}

int main()
{

    string s;
    getline(cin, s);

    long n;
    cin >> n;

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
