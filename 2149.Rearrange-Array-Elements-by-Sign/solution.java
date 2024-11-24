import java.util.ArrayList;
import java.util.List;

public class solution {
    public int[] rearrangeArray(int[] nums) {
        
        List<Integer> temp1 = new ArrayList<>();
        List<Integer> temp2 = new ArrayList<>();
        List<Integer> result = new ArrayList<>();
        
        for(int i = 0; i < nums.length; i++){
            if(nums[i] > 0){
                temp1.add(nums[i]);
            }else{
                temp2.add(nums[i]);
            }
        }
        
        for(int i = 0; i < temp1.size(); i++){
            result.add(temp1.get(i));
            result.add(temp2.get(i));
        }
        
        return result.stream().mapToInt(i -> i).toArray();
    }
    
    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = {3,1,-2,-5,2,-4};
        int[] result = s.rearrangeArray(nums);
        for(int i = 0; i < result.length; i++){
            System.out.print(result[i] + " ");
        }
    }
}
