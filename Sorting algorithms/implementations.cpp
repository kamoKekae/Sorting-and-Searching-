#include <vector>
#include <algorithm>
#include "sorters.hpp"

void selectionSort(std::vector<int> &nums)
{
    for(size_t i =0; i < nums.size();i++)
    {
        size_t min =i;// Assume min is at beginning
        // Scan for min element
        for(size_t j =i; j<nums.size();j++){
            if(nums.at(j) < nums.at(min)) min =j;
        }
        // Perform swap
        std::swap(nums[i] , nums[min]);        
    }
}
void bubbleSort(std::vector<int> &nums)
{
    for (size_t i = 0; i < nums.size() - 1; i++) 
    {
        for (size_t j = 0; j < nums.size() - i - 1; j++) 
        {
            if (nums[j] > nums[j + 1]) 
            {
                std::swap(nums[j], nums[j + 1]);
            }
        }
    }
}

