

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.Stack;

public class Main {

    static int knapsack(int [] profit, int [] weight, int capacity){
        int n = weight.length;

        int [][] dp = new int[n+1][capacity+1];

        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= capacity; j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
                else if(weight[i-1] <= j){
                    dp[i][j] = Math.max(profit[i-1]+dp[i-1][j-weight[i-1]], dp[i-1][j]);
                }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

        return dp[n][capacity];
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int [] profit = {10, 15, 30, 4};
        int [] weight = {2, 5, 7, 8};
        int capacity = 10;

        System.out.println(knapsack(profit, weight, capacity));
    }
}