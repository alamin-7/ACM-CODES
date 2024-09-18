public String largestNumber(int[] nums) {
        
    String [] strArray = new String [nums.length];

    for(int i = 0; i < nums.length; i++){
        strArray[i] = String.valueOf(nums[i]);
    }

    Arrays.sort(strArray, (a , b)-> (b+a).compareTo(a+b));

    if(strArray[0].equals("0")){
        return "0";
    }

    StringBuilder sb = new StringBuilder();

    for(int i = 0; i < strArray.length; i++){
        sb.append(strArray[i]);
    }

    return sb.toString();
}