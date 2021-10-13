#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

static vector<int> a = {4, 3, 2, 1};

template<typename RandomIterator>
void ShakerSort(RandomIterator begin, RandomIterator end){
    while(begin < end){
        for(auto it = begin; it + 1 < end; ++it){
            if(*it > *(it + 1))
                swap(*it, *(it+1));
        }
        --end;
        for(auto it = end; it > begin; --it){
            if(*it < *(it - 1))
                swap(*it, *(it-1));
        }
        ++begin;
    }
}

int main(){
    for(auto el : a){
        cout << el << " ";
    }
    cout<<endl;
    ShakerSort(a.begin(), a.end());
    for(auto el : a){
        cout << el << " ";
    }
    cout<<endl;
}