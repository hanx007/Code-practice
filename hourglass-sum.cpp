#include <bits/stdc++.h>

using namespace std;


int hourglassSum(vector<vector<int>> a) {
    int max=-64;//the least sum possible
    int sum=0;
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>max){
                max=sum;
            }   
        } 
    }
    return max;
     

}

int main()
{

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
