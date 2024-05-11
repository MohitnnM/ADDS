#include <vector>
#include<iostream>

void insertionSort(std::vector<int>& array) {
    for (int i = 1; i < array.size(); i++) {
        for (int j = i; j > 0; j--) {
            if (array[j] < array[j - 1]) {
                // swap array[j] and array[j-1]
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            } else {
                break;
            }
        }
    }
}

int main(){
    std::vector<int> array1 ={0,4,3,6,1};
    insertionSort(array1);

    for (int num : array1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

#include <vector>

class MergeSort {
public:
    std::vector<int> sort(std::vector<int> array) {
        if(array.size() == 1) {
            return array;
        }
        // Divide the array into two halves
        int mid = array.size() / 2;
        std::vector<int> leftArray(array.begin(), array.begin() + mid);
        std::vector<int> rightArray(array.begin() + mid, array.end());

        // Sort left and right subarrays recursively
        std::vector<int> sortedLeftArray = sort(leftArray);
        std::vector<int> sortedRightArray = sort(rightArray);

        // Merge sorted left and right subarrays
        std::vector<int> result;
        int l = 0, r = 0;
        while (l < sortedLeftArray.size() && r < sortedRightArray.size()) {
            if (sortedLeftArray[l] < sortedRightArray[r]) {
                result.push_back(sortedLeftArray[l]);
                l++;
            } else {
                result.push_back(sortedRightArray[r]);
                r++;
            }
        }
        // Add remaining elements from sortedLeftArray
        while (l < sortedLeftArray.size()) {
            result.push_back(sortedLeftArray[l]);
            l++;
        }
        // Add remaining elements from sortedRightArray
        while (r < sortedRightArray.size()) {
            result.push_back(sortedRightArray[r]);
            r++;
        }
        return result;
    }
};
