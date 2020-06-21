#include <iostream>
#include <vector>
using namespace std;
vector<int> sum;
int n, num;
int main(){
    while(cin>>n){
        sum.resize(n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>num;
                sum[j] += num;
            }
        }
        for(int i = 0; i < n; i++)
            printf("%d%c", sum[i], i != n - 1 ? ' ' : '\n');
    }
    return 0;
}
