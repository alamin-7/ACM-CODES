public class leetcode_aug21 {
    public int maxDistance(List<List<Integer>> arrays) {

        int min = arrays.get(0).get(0);
        int maximum = arrays.get(0).get(arrays.get(0).size()-1);

        int ans = 0;

        for(int i = 1; i < arrays.size(); i++){

            int currMin = arrays.get(i).get(0);
            int currMax = arrays.get(i).get(arrays.get(i).size()-1);

            ans = Math.max(ans, Math.max((currMax - min), (maximum - currMin)));

            min = Math.min(min, currMin);
            maximum = Math.max(maximum, currMax);
        }

        return ans;
    }
}
