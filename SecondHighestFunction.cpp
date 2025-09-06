int findSecondMax(int arr[], int n) {
    int firstMax = arr[0];
    int secondMax = -1;  // assuming marks/values are non-negative

    // find firstMax and secondMax in one pass
    for (int i = 1; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] < firstMax) {
            secondMax = arr[i];
        }
    }

    return secondMax;
}
