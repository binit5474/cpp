#include<iostream>
using namespace std;
float area(int r,float pi){
    float formula = pi*r*r;
    cout<<"the area of circle is :";
    return formula;
}
    float circum(int r,float pi){
        float circumfrance = 2*pi*r;
        cout<<"circumfrance of cirle is:"<<endl;
        return circumfrance;
    }

int main(){
    cout<<area(3,3.14)<<endl<<circum(3,3.14)<<endl;
    return 0;
}