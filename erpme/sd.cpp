#include <iostream>
#include <vector>
using namespace std;

int main() {
    int s, d;
    cout << "s = ";
    cin >> s;
    cout << "d = ";
    cin >> d;

   
    if (s<d) {
        cout << -1;
        return 0;
    }

    vector<int> vec(d, 0); 
   
    s -= 1; 
    for (int i = d - 1; i > 0; i--) {
        if (s >= 9) {
            vec[i] = 9;
            s -= 9;
        } else {
            vec[i] = s;
            s = 0;
            break;
        }
    }
    vec[0] = s + 1;
    
    for (int num : vec) {
        cout << num;
    }
    return 0;
}
