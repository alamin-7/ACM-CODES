package basic algo codes;

public class Bfs {
     /*   public static void disConnectedGraph(List<List<Integer>> adj){

        boolean [] visited = new boolean[adj.size()];

        for(int i = 0; i < adj.size(); i++){
            if(!visited[i]){
                bfs(adj, i, visited);
            }
        }
    }*/

    public static void bfs(List<List<Integer>> adj, int s){

        boolean [] visited = new boolean[adj.size()];
        Queue<Integer> queue = new LinkedList<>();

        int [] level = new int[adj.size()];

        visited[s] = true;
        queue.add(s);

        level[s] = 0;

        while(!queue.isEmpty()){

            int current = queue.poll();
            System.out.println("Current "+current);

            for(int x: adj.get(current)) {
                if (!visited[x]) {
                    visited[x] = true;
                    level[x] = level[current]+1;
                    queue.add(x);
                }
            }

        }

        boolean [] v = new boolean[adj.size()];

        for(List<Integer> list: adj){

            for(int value: list){
                if(!v[value]) {
                    v[value] = true;
                    System.out.println("Node " + value + " level " + level[value]);
                }
            }
        }

    }
    public static  void addEdge(List<List<Integer>> adj, int u, int v){

        adj.get(u).add(v);
        adj.get(v).add(u);

    }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int u, v;

        int V = 5;
        List<List<Integer>> adj = new ArrayList<>(V);

        for(int i = 0; i < V; i++){
            adj.add(new ArrayList<>());
        }

        for(int i = 0; i < V-1; i++){
            u = sc.nextInt();
            v = sc.nextInt();

            addEdge(adj, u, v);
        }

        bfs(adj, 0);
    }
}
