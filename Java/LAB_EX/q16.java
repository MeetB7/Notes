public class q16 {

    public static void main(String[] args) {
        int[] arr = {9, 3, 7, 5, 1, 4, 6, 2, 8};

        q16 sorter = new q16();
        sorter.sortArray(arr);

        System.out.println("Sorted Array: " + java.util.Arrays.toString(arr));
    }

    public void sortArray(int[] arr) {
        Thread thread = new Thread(() -> {
            mergeSort(arr, 0, arr.length - 1);
        });
        thread.start();

        try {
            thread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    public void mergeSort(int[] arr, int left, int right) {
        if (left < right) {
            int mid = (left + right) / 2;

            Thread leftThread = new Thread(() -> {
                mergeSort(arr, left, mid);
            });
            Thread rightThread = new Thread(() -> {
                mergeSort(arr, mid + 1, right);
            });

            leftThread.start();
            rightThread.start();

            try {
                leftThread.join();
                rightThread.join();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }

            merge(arr, left, mid, right);
        }
    }

    public void merge(int[] arr, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        int[] leftArray = new int[n1];
        int[] rightArray = new int[n2];

        System.arraycopy(arr, left, leftArray, 0, n1);
        System.arraycopy(arr, mid + 1, rightArray, 0, n2);

        int i = 0, j = 0, k = left;

        while (i < n1 && j < n2) {
            if (leftArray[i] <= rightArray[j]) {
                arr[k++] = leftArray[i++];
            } else {
                arr[k++] = rightArray[j++];
            }
        }

        while (i < n1) {
            arr[k++] = leftArray[i++];
        }

        while (j < n2) {
            arr[k++] = rightArray[j++];
        }
    }
}
