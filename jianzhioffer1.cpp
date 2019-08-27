#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int row = array.size();
        int col = array[0].size();
        int i = row - 1;
        int j = 0;
        int temp;

        while(1){
            //这个判断得放在前面，因为初始时row可能等于0
            if(j >= col || i < 0){
                break;
            }
            temp = array[i][j];
            if(target > temp){
                j++;
                continue;
            }
            else if(target < temp){
                i--;
                continue;
            }
            else {
                return true;
            }
        }
        return false;
    }
};


int main(){
    cout<<endl;
}