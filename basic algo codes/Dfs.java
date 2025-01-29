import java.util.*;

public class Dfs {

    static void dfsRecursive(List<List<Integer>> adj, boolean [] visited, int source){
        visited[source] = true;

        System.out.println(source);

        for(int node: adj.get(source)){
            if(!visited[node]){
                dfsRecursive(adj, visited, node);
            }
        }
    }
    static void dfs(List<List<Integer>> adj, int s){

        boolean [] visited = new boolean[adj.size()];
        Stack<Integer> st = new Stack<>();
        st.push(s);
        visited[s] = true;

        while (!st.isEmpty()){
            int peek = st.pop();
            System.out.println(peek);
            for(int node: adj.get(peek)){
                if(!visited[node]){
                    st.push(node);
                    visited[node] = true;
                }
            }
        }
    }

    static void addEdge(List<List<Integer>> adj, int u, int v){
        adj.get(u).add(v);
        adj.get(v).add(u);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int V = sc.nextInt();

        List<List<Integer>> adj = new ArrayList<>(V);

        for (int i = 0; i < V; i++) {
            adj.add(new ArrayList<>());
        }
        for (int i = 0; i < V - 1; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();

            addEdge(adj, u, v);
        }

        dfs(adj, 1);
        
        boolean [] visited = new boolean[adj.size()];
        
        dfsRecursive(adj, visited, 1);
    }
}