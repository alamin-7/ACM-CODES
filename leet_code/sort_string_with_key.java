public String[] sortPeople(String[] names, int[] heights) {
        
    int totalPeople = names.length;

    Map<Integer, String> heightToName = new HashMap<>();

    for(int i = 0; i < totalPeople; i++){
        heightToName.put(heights[i], names[i]);
    }

    Arrays.sort(heights);

    String[] sortedNames = new String[totalPeople];
    
    int j = 0;

    for(int i = totalPeople - 1; i >= 0; i--){

        sortedNames[j++] = heightToName.get(heights[i]); 
    }

    return sortedNames;
}