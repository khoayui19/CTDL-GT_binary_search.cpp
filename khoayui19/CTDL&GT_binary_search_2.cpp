//https://niithanoi.edu.vn/
package binary.search;

public class BinarySearch {

    int binarySearch(int arr[], int l, int r, int x) {
        if (r >= l) {
            int mid = l + (r - l) / 2;
            if (arr[mid] == x)
                return mid;
            if (arr[mid] > x)
                return binarySearch(arr, l, mid - 1, x);
            return binarySearch(arr, mid + 1, r, x);
        }

        return -1;
    }

    public static void main(String args[]) {
        BinarySearch ob = new BinarySearch();
        int arr[] = { 2, 4, 9, 10, 11, 22, 24, 31, 48, 56, 76, 86 };
        int n = arr.length;
        int x = 10;
        int result = ob.binarySearch(arr, 0, n - 1, x);
        if (result == -1)
            System.out.println("Phần tử không tồn tại.");
        else
            System.out.println("Phần tử được tìm thấy tại vị trí: " + result);
    }
}



package binary.search;

public class IterativeBinarySearch {

    int binarySearch(int arr[], int x) {
        int l = 0, r = arr.length - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == x)
                return m;
            if (arr[m] < x)
                l = m + 1;
            else
                r = m - 1;
        }

        return -1;
    }

    public static void main(String args[]) {
        BinarySearch ob = new BinarySearch();
        int arr[] = { 2, 4, 9, 10, 11, 22, 24, 31, 48, 56, 76, 86 };
        int n = arr.length;
        int x = 10;
        int result = ob.binarySearch(arr, x);
        if (result == -1)
            System.out.println("Phần tử không tồn tại.");
        else
            System.out.println("Phần tử được tìm thấy tại vị trí: " + result);
    }
}
