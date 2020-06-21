#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        queue<int> q;
        for(int i = 2; i <= n; i++)
            if(n % i == 0){
                if(q.empty())
                    q.push(i);
                else{
                    if(i == q.back() + 1)
                        q.push(i);
                    else
                        break;
                }
            }
        while(!q.empty()){
            if(q.size() == 1){
                cout<<q.front()<<endl;
                q.pop();
            }
            else{
                cout<<q.front()<<' ';
                q.pop();
            }
        }
    }
    return 0;
}