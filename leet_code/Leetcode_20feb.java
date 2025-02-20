public class Leetcode_20feb {
    HashMap<String, Integer> map = new HashMap<>();

    String generateAndFind(HashMap<String, Integer> map, int n, String currentString){

        if( currentString.length() == n){
            if(!map.containsKey(currentString)){
                return currentString;
            }
            else{
                return null;
            }
        }

        String result = generateAndFind(map, n, currentString+'0');
        if(result != null){
            return result;
        }
        result = generateAndFind(map, n, currentString+'1');
        if(result != null){
            return result;
        }

        return null;
    }

    public String findDifferentBinaryString(String[] nums) {
        
        for(int i = 0; i < nums.length; i++){
            map.put(nums[i], 1);
        }

        return generateAndFind(map, nums.length, "");
        
    }
}
