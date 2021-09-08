import java.util.Scanner;

class arrays_ds {
    public static int[] reverrs(int[] arr){
        int i;
        int n = arr.length;
        int j = n-1;
        int[] a = new int[n];
        for(i = 0;i < n;i++)
            a[j] = arr[i];
        return a;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int i,n;
        System.out.println("Nhap vao so phan tu cua mang: ");
        n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Nhap vao cac phan tu cua mang:\n");
        for(i = 0;i < n;i++){
            arr[i] = sc.nextInt();
        }
        for(i = n-1;i >= 0;i--)
            System.out.print(arr[i] + " ");
        sc.close();
    }
}