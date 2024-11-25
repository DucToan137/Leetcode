import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

public class solution {
    public int[] findIntersectionValues(int[] nums1, int[] nums2) {
        List<Integer> result = new ArrayList<>();
        int ans1 = 0;
        int ans2 = 0;
        
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        
        for(int i = 0;i<nums1.length; ++i){
            if(Arrays.binarySearch(nums2, nums1[i]) >= 0){
                ans1++;
            }
        }
        
        for(int i = 0;i<nums2.length; ++i){
            if(Arrays.binarySearch(nums1, nums2[i]) >= 0){
                ans2++;
            }
        }
        
        result.add(ans1);
        result.add(ans2);
        
        return result.stream().mapToInt(i->i).toArray();
    }
    
    public static void main(String[] args) {
        int[] nums1 = {4,3,2,3,1};
        int[] nums2 = {2,2,5,2,3,6};
        solution s = new solution();
        int[] result = s.findIntersectionValues(nums1, nums2);
        System.out.println(Arrays.toString(result));
    }
}
