#include <iostream>
using namespace std;
int a[10]={12,23,34,12,35,12,5,4312,4325,134};
int main(){
    for (int i=1; i<9; i++) {
        for (int j=i; j>=0; j--) {
            if (a[j+1]<a[j]) {
                int k = a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
        
    }
    for (int p=0; p<10; p++) {
        cout<<a[p]<<'\t';
    }
}