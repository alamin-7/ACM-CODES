public int[] missingRolls(int[] rolls, int mean, int n) {
    int totalObservation = n + rolls.length;
    int givenSum = 0;
    for(int i = 0; i < rolls.length; i++){
        givenSum += rolls[i];
    }

    int totalSum = mean * (n + rolls.length);
    int missingSum = totalSum - givenSum;

    int base = (missingSum / n);
    int reminder = missingSum % n;

    if(missingSum < n || (missingSum > (n * 6))){
        return new int[0];
    }

    int [] result = new int[n];

    Arrays.fill(result, base);

    for(int i = 0; i < reminder; i++){
        result[i]++;
    }

    return result;
}