#include <iostream>
using namespace std;
int arr[1000][1000];
int main(){
    int n;
    while(cin>>n){
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; cin>>arr[i][j++]);
        for(int i = n - 1; i >= 0; i--)
        for(int j = 0; j < n; j++){
            cout<<arr[i][j];
            if(j != n - 1)
                cout<<' ';
            else
                cout<<'\n';
        }
    }
    return 0;
}