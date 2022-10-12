/* https://github.com/lavicodes/Leetcode-Problems.git

162. Find Peak Element
*/

class Solution {
    public int findPeakElement(int[] arr) {
                        int start = 0;
        int end = arr.length - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] > arr[mid+1]) {
                // you are in the desc part of array
                // this may be the ans, but look at the left
                // this is why end != mid - 1
                end = mid;
            }
                else {
                    // you are in the asc part of array
                    start = mid + 1; // because we know that mid + 1 element is greater than mid element
                }
                // in the end, start == end and pointing to the largest no., because of the two checks above 
// start and end is always trying to find the max element in the above two checks 
// they are pointing to just one element, that is the max because that what the checks say
// more elaboration: at every point of time for start and end they have the best possible ans till that 
// if we are saying that only one item is remaining, hence cuz of the above line i.e, the best possible ans.
                }
                return start; // or end as both are equal
    }
}