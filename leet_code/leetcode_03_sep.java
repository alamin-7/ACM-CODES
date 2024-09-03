class Solution {
    public int getLucky(String s, int k) {

        char [] str = s.toCharArray();

        int sum = 0; 
        int num;

        for(int i = 0; i < str.length; i++){
            num = (str[i]-'a')+1;

            if(num > 9){
                while(num > 0){
                    sum += (num % 10);
                    num /= 10;
                }
            }
            else{
                sum += num;
            }
        }

        System.out.println(sum);

        if(k == 1) return sum;
        while(k > 1){
            num = sum;
            sum = 0;
            while(num != 0){
                sum += (num % 10);
                num /= 10;
            }
            k--;
        }

        return sum;
    }
}