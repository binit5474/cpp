#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int>v={2,4,3,5,6,7,4};
    reverse(v.begin()+3, v.end()-1);
    for(int i=0;i<7;i++){
        cout<<v[i]<<endl;
    }
}
