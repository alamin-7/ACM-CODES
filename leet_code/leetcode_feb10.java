import java.util.Stack;

public String clearDigits(String s) {
    StringBuilder sb = new StringBuilder(s);

    int i = 0;

    while(i < sb.length()){
        if(sb.charAt(i) >= '0' && sb.charAt(i) <= '9'){
            int j = i-1;
            while(j >= 0){
                if(sb.charAt(j) >= 'a' && sb.charAt(j) <= 'z'){
                    sb.deleteCharAt(i);
                    sb.deleteCharAt(j);
                    break;
                }
                j--;
            }
            i--;
        }
        else{
            i++;
        }
    }

    return sb.toString();
}


// 0(n) time complexity solution with extra memory space

    public String clearDigits(String s) {
        StringBuilder sb = new StringBuilder(s);
        StringBuilder ans = new StringBuilder("");

        Stack<Character> charaStack = new Stack<>();

        for(int i = 0; i < sb.length(); i++){
            if(sb.charAt(i) >= '0' && sb.charAt(i) <= '9'){
                charaStack.pop();
            }
            else{
                charaStack.push(sb.charAt(i));
            }
        }

        while(!charaStack.isEmpty()){
            char ch = charaStack.peek();
            charaStack.pop();
            ans.append(ch);
        }
        ans.reverse();

        return ans.toString();
    }

