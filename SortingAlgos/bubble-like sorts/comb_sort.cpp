#include <iostream>
#include <vector>

using namespace std;

//O(n^2)
template<typename RandomIterator>
void CombSort(RandomIterator begin, RandomIterator end){
    for(size_t step = (end - begin) / 1.247; step > 0; step/=1.247){
        for(size_t i = 0; i + step < (end - begin); ++i){
            if(*(begin+i) > *(begin + i + step))    swap(*(begin+i), *(begin + i + step));
        }
    }
}

int main(){
    vector<int> a = {1, 0, 4, 5, -1};
    CombSort(a.begin(), a.end());
    for(auto el : a) cout <<el<<", ";
    cout<<endl;
}