#include <iostream>
using namespace std;
int main(){
    int r,c,n;
    cin>>r>>c>>n;
    int a[n][3];
    for(int i=0;i<n;i++) cin>>a[i][0]>>a[i][1]>>a[i][2];
    for(int i=0;i<n;i++) swap(a[i][0],a[i][1]);
    for(int i=0;i<n;i++) cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<"\n";
}
