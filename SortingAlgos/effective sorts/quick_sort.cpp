#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


static vector<int> a = {4, 3, 2, 1};

template<typename RandomIt>
void QuickSort(RandomIt begin, RandomIt end){
    RandomIt mid = begin + (end - begin)/2;
    auto i = begin, j = end;
    while(i<j){
        while(*(i) < *(mid)) ++i;
        while(*(--j) > *(mid));
        if(i < j) swap(*(i), *(j));
    }
    if(mid - begin > 1) QuickSort(begin, mid);
    if(end - mid > 1) QuickSort(mid + 1, end);
}

//O(n) or O(n*log(n)) or O(n^2)
template<typename T>
void QuickSort(vector<T>& a, unsigned start, unsigned end){
    unsigned mid = (start + end)/2;
    auto i = start, j = end;
    cout<<"*************"<<endl;
    for(auto i : a) cout <<i <<" ";
    cout <<endl;
    while(i<j){
        while(a[i] < a[mid]) ++i;
        while(a[j] > a[mid]) --j;
        if(i < j) swap(a[i++], a[j--]);
    }
    for(auto i : a) cout <<i <<" ";
    cout<<endl;
    if(mid - start > 1) QuickSort(a, start, mid);
    if(end - mid > 1) QuickSort(a, mid + 1, end);
}

int main(){
    //QuickSort(a, 0, a.size()-1);
    QuickSort(a.begin(), a.end());
    for(auto i : a) cout <<i <<" ";
    cout << endl;
}