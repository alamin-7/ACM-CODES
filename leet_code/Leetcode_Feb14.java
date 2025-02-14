import java.util.Vector;

public class Leetcode_Feb14 {
    Vector<Integer> v;
    int p;

    public ProductOfNumbers() {
        this.v = new Vector<>();
        p = 1;
    }

    public void add(int num) {
        if (num == 0) {
            v.clear();
            p = 1;
        } else {
            v.add(p * num);
            p *= num;
        }
    }

    public int getProduct(int k) {
        System.out.println(k);
        if (k > v.size()) {
            return 0;
        } else {
            if (v.size() == k) {
                return v.get(k - 1);
            } else {
                return ((v.get(v.size() - 1)) / (v.get(v.size() - k - 1)));
            }
        }
    }

    // better solution with O(1) time complexity

    Vector<Integer> v;
    int zero_index;
    int p;

    public ProductOfNumbers() {
        this.v = new Vector<>();
        this.p = 1;
        this.zero_index = 0;
    }

    public void add(int num) {
        if (num == 0) {
            v.add(0);
            p = 1;
            zero_index = v.size();
        } else {
            v.add(p * num);
            p *= num;
        }
    }

    public int getProduct(int k) {

        if (k > (v.size() - zero_index)) {
            return 0;
        } else {
            if (v.size() - zero_index == k) {
                return v.get(v.size() - 1);
            } else {
                return ((v.get(v.size() - 1)) / (v.get(v.size() - k - 1)));
            }
        }
    }

}
