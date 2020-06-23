#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n;
bool cmp(string a,string b){
        return a<b;
}
int main (){
    cin>>n;
    string country[n];
    for (int i=0; i<n; i++)
        cin>>country[i];
    sort (country,country+n,cmp);
    for (int i=0; i<n; i++)
        cout<<country[i]<<endl;
    return 0;
}
