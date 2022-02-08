//Abel Anand
//Matrix multiplication
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> a {
        {55, 47, 51},
        {92, 30, 80},
        {18, 52, 78}
    };
    vector<vector<int>> b {
        {87, 10, 33},
        {89, 49, 80},
        {55, 64, 58}
    };
    vector<vector<int>> c;

    for (int i = 0; i < a.size(); i++) {
        vector<int> temp;//temporary vector thats gonna dump into c
        int num = 0;
        for (int j = 0; j < a[i].size(); j++) {
            temp.push_back(a[i][num]*b[num][0]);
            num++;
        }
        c.push_back(temp);
    }
    
    for (int i = 0; i < c.size(); i++) {
        for (int j =0; j < c[i].size(); j++) {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
}
