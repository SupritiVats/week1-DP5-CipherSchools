#include<bits/stdc++.h>
using namespace std;

void dorotation(vector<vector<int>> &nums){
    for(int i = 0; i < nums.size();i++){
        for(int j = 0; j < i;j++){
            if(i!=j){
                int temp = nums[i][j];
                nums[i][j] = nums[j][i];
                nums[j][i] = temp;
            }
        }
    }
    for(int i = 0; i < nums.size();i++){
        for(int j = 0; j<nums[i].size()/2;j++){
            int temp = nums[i][j];
            nums[i][j] = nums[i][nums[i].size()-1-j];
            nums[i][nums[i].size()-1-j] = temp;

        }
    }

}
void display(vector<vector<int> > &nums){
    for(int i = 0; i < nums.size();i++){
        for(int j = 0; j < nums[i].size();j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    vector<vector<int> > nums = {{2,3,4,6},{52,16,27,28},{99,10,11,12},{13,14,15,16}};
    cout<<"before rotation"<<endl;
    display(nums);
    dorotation(nums);
    cout<<"after rotation"<<endl;
    display(nums);
    return 0;
}
