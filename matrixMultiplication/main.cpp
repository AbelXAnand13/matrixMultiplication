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
//    ┌                  ┐
//    │ a00  a01  a02    │
//A = │ a10  a11  a12    │
//    │ a20  a21  a22    │
//    └                  ┘
//    ┌                  ┐
//    │ b00  b01  b02    │
//B = │ b10  b11  b12    │
//    │ b20  b21  b22    │
//    └                  ┘
//    ┌                                                                                                                   ┐
//    │ a00 * b00 + a01 * b10 + a02 * b20     a00 * b01 + a01 * b11 + a02 * b21      a00 * b02 + a01 * b12 + a02 * b22    │
//C = │ a10 * b00 + a11 * b10 + a12 * b20     a10 * b01 + a11 * b11 + a12 * b21      a10 * b02 + a11 * b12 + a12 * b22    │
//    │ a20 * b00 + a21 * b10 + a22 * b20     a20 * b01 + a21 * b11 + a22 * b21      a20 * b02 + a21 * b12 + a22 * b22    │
//    └                                                                                                                   ┘
    for (int i = 0; i < 3; i++) {
            vector<int> temp { 0, 0, 0 };//temporary vector to dump into c
            for (int j = 0; j < 3; j++) {
                for (int x = 0; x < 3; x++) {
                    temp[j] += a[i][x] * b[x][j];//adding the products to temp vector
                }
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
