#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


void minimumBribes(vector<int> q,int n) {
        int count = 0 ;
        int mid=INT_MAX;    //always keep track of min three vlaues observed.
        int max=INT_MAX;    //Compare currently seeing value with this three values.
        int min=INT_MAX;
        
        for(int i=n-1;i>=0;i--){

            if( (q[i]-i) > 3){
                cout<<"Too chaotic"<<endl;
                return;
            }
            else{

                if(q[i]>max){
                    cout<<"Too chaotic"<<endl;
                    return;    
                }
                else if(q[i]>mid){
                    count=count+2;
                }
                else if(q[i]>min){
                    count=count+1;
                }


                if(q[i]<min){
                    max=mid;
                    mid=min;
                    min=q[i];
                }
                else if(q[i]<mid){
                    max=mid;
                    mid=q[i];
                }
                else if(q[i]<max){
                    max=q[i];
                }
            }
        }
       
    cout<<count<<endl;

}

int main()
{
    int t;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;

        string q_temp_temp;
        getline(cin, q_temp_temp);

        vector<string> q_temp = split_string(q_temp_temp);

        vector<int> q(n);

        for (int i = 0; i < n; i++) {
            int q_item = stoi(q_temp[i]);

            q[i] = q_item;
        }

        minimumBribes(q,n);
    }

    return 0;
}


