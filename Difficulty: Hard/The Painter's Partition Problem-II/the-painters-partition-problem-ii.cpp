bool isPossible(vector<int> &arr, int k, int mid) {
    int painterCount = 1;
    int time = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > mid) return false;

        if (time + arr[i] <= mid) {
            time += arr[i];
        } else {
            painterCount++;
            if (painterCount > k) return false;
            time = arr[i];
        }
    }
    return true;
}

class Solution {
  public:
    int minTime(vector<int> &arr, int k) {
        int start = *max_element(arr.begin(), arr.end());
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        int end =sum;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (isPossible(arr, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans; 
    }
};