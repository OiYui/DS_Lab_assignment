#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++) cin>>a[i];
    int l=0,h=n-2,mid;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==mid+1) l=mid+1;
        else h=mid-1;
    }
    cout<<l+1;
}
