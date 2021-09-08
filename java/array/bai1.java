package array;
import java.util.Arrays;

public class bai1 {
    void getMinDiff(int[] arr) {
        Arrays.sort(arr);
        System.out.println(arr);
    }
    public static void main(String[] args){
        int[] a = {4,3,2,1,2,34,4};
        getMinDiff(a);
    }
}