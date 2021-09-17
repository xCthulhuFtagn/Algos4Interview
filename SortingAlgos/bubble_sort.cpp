/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename RandomIt>
void bubble_sort(RandomIt r_begin, RandomIt r_end){
    if (r_end - r_begin <= 1)
        return;
    bool flag = false;
    for (RandomIt it = r_begin; it != r_end - 1; ++it) {
        flag = true;
        for (RandomIt jija = r_end - 1; jija != it + 1; --jija) {
            if (*jija < *(jija - 1)) {
                swap(*jija, *(jija - 1));
                flag = false;
            }
        }
        if (flag)
            break;
    }
}

int main(){
    size_t N;
    cin >> N;
    vector<int> el_problema = {1, 0};
    bubble_sort(el_problema.begin(), el_problema.end());
    for(auto el : el_problema) cout << el;
}
*/