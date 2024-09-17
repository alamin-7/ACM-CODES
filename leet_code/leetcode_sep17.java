public String[] uncommonFromSentences(String s1, String s2) {
    String s = s1+" "+s2;

    String [] words = s.split(" ");

    String [] ans = getStringArray(words);
    return ans;
}


    public String[] getStringArray(String [] words) {
        
    Map<String, Integer> map = new HashMap<>();
    List<String> result = new ArrayList<>();

    for(String word: words){
        map.put(word, map.getOrDefault(word, 0) + 1);
    }

    for(String word: words){
        if(map.get(word) == 1){
           result.add(word); 
        }
    }
    
     return result.toArray(new String[0]);

    }