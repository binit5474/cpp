#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={2,3,5,3,7,4};
    int x=3;
    int count=0;
    for(int i=0;i<v.size();i++ ){
        
        if(v[i]>x){
            count++;
        }
    }
    cout<<count;
}