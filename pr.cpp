#include<iostream>
using namespace std;

bool isOverlap(pair<int,int> p1,pair<int,int> p2,pair<int,int> p3,pair<int,int> p4){
    if(p1.first>p4.first || p2.first<p3.first) return false;
    if(p1.second<p4.second || p2.second>p3.second) return false;
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        pair<int,int> p1,p2,p3,p4;
        cin>>p1.first>>p1.second;
        cin>>p2.first>>p2.second;
        cin>>p3.first>>p3.second;
        cin>>p4.first>>p4.second;
        cout<<isOverlap(p1,p2,p3,p4)<<'\n';
    }
    return 0;
}