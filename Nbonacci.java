public class Nbonacci {
    public static void main(String args[]) {
        java.util.Scanner s = new java.util.Scanner(System.in);
        int n = s.nextInt();
        int k = s.nextInt();
        int arr[] = new int[k];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = 0;
            System.out.print(arr[i] + " ");
        }
        arr[n - 1] = 1;
        System.out.print(arr[n - 1] + " ");
        arr[n] = 1;
        System.out.print(arr[n] + " ");
        int j = 0;
        int sum = arr[n];
        for (int i = n + 1; i < k; i++) {
            sum = sum - arr[j++] + arr[i - 1];
            arr[i] = sum;
            System.out.print(arr[i] + " ");
        }
        s.close();
    }
}