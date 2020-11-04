#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    int n,r=0;
    cin>>n;
    r=n%8;//Every 8th time the order repeats - 1 2 3 4 5|9 8 7 6 5|9 10 11 12 13| 1+8=9,2+8=10,3+8=11 and so on
    if(r==1)
        cout<<r;
    if(r==5)
        cout<<r;
    if(r==2||r==0)
        cout<<2;
    if(r==3||r==7)
        cout<<3;
    if(r==4||r==6)
        cout<<4;
    
    return 0;
}
