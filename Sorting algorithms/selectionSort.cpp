#include <iostream>
#include <vector>
#include <algorithm>

void selectionSort(std::vector<int> &nums){

    for(int i =0; i < nums.size();i++){
        int min =i;// Assume min is at beginning
        // Scan for min element
        for(int j =i; j<nums.size();j++){
            if(nums.at(j) < nums.at(min)) min =j;
        }
        // Perform swap
        std::swap(nums[i] , nums[min]);
        
    }
}

int main(){
    std::vector<int> nums = {0,9,8,7,6,5,4,3,2,1};
    selectionSort(nums);

    for(int i=0; i <nums.size() ;i++){
        std::cout<< nums.at(i);
    }

    return 0;
}