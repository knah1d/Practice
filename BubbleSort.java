class BubbleSort {
    public static void main(String[] args) {
        int[] arr = {5, 2, 8, 1, 3};
        int n = arr.length;
        
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < (n - i); j++) {
                if (arr[j - 1] > arr[j]) {
                    arr[j] = arr[j] + arr[j - 1];
                    arr[j - 1] = arr[j] - arr[j-1];
                    arr[j] = arr[j] - arr[j-1];
                }
            }
        }
        
        System.out.println("Sorted array: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }    
    }
}