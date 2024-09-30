class CustomStack {

    int maxSize;
    int [] arr = new int [1000];
    int i;

    public CustomStack(int maxSize) {
        this.i = 0;
        this.maxSize = maxSize;
    }
    
    public void push(int x) {
       if(i < maxSize){
         arr[i++] = x;
       }
    }
    
    public int pop() {

        if(i > 0){
        int num =  arr[i-1];
        i--;
        return num;
        }
        else{
            return -1;
        }
    }
    
    public void increment(int k, int val) {
        for(int j = 0; j < k && j < i; j++){
            arr[j] = arr[j] + val;
        }
    }
}

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack obj = new CustomStack(maxSize);
 * obj.push(x);
 * int param_2 = obj.pop();
 * obj.increment(k,val);
 */
