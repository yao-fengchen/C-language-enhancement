#include <iostream>
using namespace std;
int height[10], h, cnt = 0;
int main(){
    for(int i = 0; i < 10; cin>>height[i++]);
    cin>>h;
    for(int i = 0; i < 10; i++)
        if(height[i] <= h + 30)
            cnt++;
    cout<<cnt<<endl;
    return 0;
}