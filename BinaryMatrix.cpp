//
// Created by Priyash on 4/21/2020.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;



class BinaryMatrix {
    vector<vector<bool>>mat;
    int row;
    int col;
    vector<int>dim;
public:
    BinaryMatrix(){
        row = 2;
        col = 2;
        dim = {row, col};
        mat = vector<vector<bool>>(row, vector<bool>(col, 0));
        this->init();
    }
    void init();
    int get(int x, int y);
    vector<int> dimensions();
};

vector<int> BinaryMatrix::dimensions() {
    return this->dim;
}

int BinaryMatrix::get(int x, int y) {
    return mat[x][y];
}

void BinaryMatrix::init() {
//    mat = {
//            {0, 0, 1, 1},
//            {0, 1, 1, 1},
//            {0, 1, 1, 1}
//    };

    mat = {
            {0, 0},
            {1, 0}
    };
}


class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix);
    int leftMostColumnWithOne_Binary(BinaryMatrix &binaryMatrix);
    int runBinarySearch(BinaryMatrix &binaryMatrix, int i);
};

int Solution::leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
    int row = binaryMatrix.dimensions()[0];
    int col = binaryMatrix.dimensions()[1];
    int out = -1;
    int i, j;
    i = 0;
    j = col - 1;
    while(i < row && j >= 0){
        if(binaryMatrix.get(i,j) == 1){
            out = j;
            j--;
        } else {
            i++;
        }
    }

    return out;
}

int Solution::leftMostColumnWithOne_Binary(BinaryMatrix &binaryMatrix) {
    int minVal = INT32_MAX;
    for(int i = 0; i < binaryMatrix.dimensions()[0]; i++){
        int column = this->runBinarySearch(binaryMatrix, i);
        minVal = min(minVal, column);
    }

    if(minVal == INT32_MAX){
        return -1;
    }
    return minVal;
}

int Solution::runBinarySearch(BinaryMatrix &binaryMatrix, int i) {
    int low = 0;
    int hi = binaryMatrix.dimensions()[1] ;
    //{0, 0, 1, 1},
    while(low < hi){
        //int mid = low + ((hi - low) / 2 );
        int mid = (low + hi) / 2 ;
        if(binaryMatrix.get(i, mid) == 0){
            low = mid + 1;
        } else {
            hi = mid;
        }
    }
    return low;
}


int main(){
    Solution* sol = new Solution();
    BinaryMatrix* binaryMatrix = new BinaryMatrix();
    //cout<<sol->leftMostColumnWithOne(*binaryMatrix)<<endl;
    int r = sol->leftMostColumnWithOne_Binary(*binaryMatrix);

    cout<<r<<endl;
    return 0;
}
