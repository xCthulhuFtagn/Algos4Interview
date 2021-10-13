#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

static vector<int> a = {4, 3, 2, 1};

template<class bb>
void print(bb b){
    for(auto el : b) cout << el << " ";
    cout<<endl;
}

//O(n^3)
template<typename RandomIterator>
void InsertionSort(RandomIterator begin, RandomIterator end){
    if(end - begin > 0){
        for(RandomIterator it = begin; it < end; ++it){
            auto compared = *it;
            RandomIterator back_runner = it;
            while(--back_runner >= begin){
                *(back_runner + 1) = *back_runner;
                if(*back_runner < compared || back_runner == begin){
                    *back_runner = compared;
                    break;
                }
            }
        }
    }
}

int main(){
    for(auto el : a){
        cout << el << " ";
    }
    cout<<endl;
    InsertionSort(a.begin(), a.end());
    print(a);
}

