#include <bits/stdc++.h>

using namespace std;

int countingValleys(int steps, string path) {
    int valley=0,seaLvl=0;
    for(int i=0;i<steps;i++){
        if(path[i]=='U'){
            seaLvl+=1;
        }
        else{
            seaLvl-=1;   
        }
        if(seaLvl==0 && path[i]=='U'){
            valley++;
        }
    }
    return valley;
}

int main()
{
    
    int steps = stoi(ltrim(rtrim(steps_temp)));

    string path;
    getline(cin, path);

    int result = countingValleys(steps, path);

    fout << result << "\n";

    fout.close();

    return 0;
}



