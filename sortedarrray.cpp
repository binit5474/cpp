#include<iostream>
#include<vector> 
using namespace std;
int main(){
  int   a[]={3,4,5,6,7,8};
    bool sortedflag= 1;
    for(int i=1;i<6 ;i++){
        if(a[i]<=a[i-1]){
           sortedflag= 0;
          // cout<<sortedflag<<endl;
    
        }
            
        
    
}
 cout<<sortedflag<<endl;
return 0;
} 
//return0: