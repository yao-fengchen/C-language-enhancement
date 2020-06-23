#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
vector<int> num, quick;

void print(vector<int> v, int n){
    for(int i = 0; i < n - 1; i++)
        cout<<v[i]<<' ';
    cout<<v[n - 1]<<'\n';
}

void insertSort(){
    vector<int> v = num;
    for(int i = 1; i < n; i++){
        for(int j = i - 1; j >= 0 && v[j + 1] < v[j]; j--)
                swap(v[j], v[j + 1]);
    }
    print(v, n);
}

void shellSort(){
    vector<int> v = num;
    int d = 5, i, j, temp;
    for(i = d; i < n; i++){
        for(j = i - d; j >= 0 && v[j + d] < v[j]; j = j - d){
            swap(v[j], v[j + d]);
        }
    }
    print(v, n);
}

void selectSort(){
    vector<int> v = num;
    for(int i = 0; i < n; i++){
        int minn = 999999999, k = 0;
        for(int j = i; j < n; j++){
            if(v[j] < minn)
                minn = v[j], k = j;
        }
        swap(v[i], v[k]);
    }
    print(v, n);
}

void quickSort(int low, int high){
    int temp, i = low, j = high;
    if(low < high){
        temp = quick[low];
        while(i < j){
            while(i <j && quick[j] >= temp) --j;
            if(i < j)
                quick[i] = quick[j];
            while(i < j && quick[i] <= temp) ++i;
            if(i < j)
                quick[j] = quick[i];
        }
        quick[i] = temp;
        quickSort(low, i - 1);
        quickSort(i + 1, high);
    }
}

void mergeSort(){
    vector<int> v = num;
    for(int i = 0; i < n;i += 2){
        if(v[i + 1] < v[i])
        swap(v[i], v[i + 1]);
    }
    print(v, n);
}

int main(){
    cin>>n;
    num.resize(n);
    for(int i = 0; i < n; cin>>num[i++]);
    insertSort();
    shellSort();
    selectSort();

    quick = num;
    quickSort(0, n - 1);
    print(quick, n);

    mergeSort();

    return 0;
}
