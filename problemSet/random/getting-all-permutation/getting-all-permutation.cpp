#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main()
{
    vector<int> s = {1,2,3};
    int len = s.size();
    int lenPermutateArray =len * (len-1);
    vector<vector<int>> result;
 
    do{
        result.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    for (int i = 0; i< lenPermutateArray; i++ ){
        cout<< i+1 << ": ";
        for(int j = 0; j < result[i].size(); j++){
            if(j != result[i].size()-1){
                cout << result[i][j] << ", ";
                }
            else{
                cout << result[i][j];
            }
            }
        cout<<"\n";
    }
}