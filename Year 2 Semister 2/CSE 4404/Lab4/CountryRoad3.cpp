#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Structure to represent a node and its distance
struct Node {
    int vertex;
    int distance;

    // Constructor
    Node(int v, int d) : vertex(v), distance(d) {}

    // Overloading the comparison operator for priority queue
    bool operator>(const Node& other) const {
        return distance > other.distance;
    }
};

// Dijkstra's algorithm function
void dijkstra(vector<vector<pair<int, int>>>& graph, int source, vector<int>& distances,int n) {
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    vector <int> dis(n, INT_MAX);

    pq.push(Node(source, 0));
    distances[source] = 0;

    while (!pq.empty()) {
        int u = pq.top().vertex;
        int dist_u = pq.top().distance;
        pq.pop();

        if (distances[u] < dist_u) continue;

        for (const auto& edge : graph[u]) {
            int v = edge.first;
            int weight_uv = edge.second;

            if (distances[u] + weight_uv < distances[v]) {
                distances[v] = distances[u] + weight_uv;
                pq.push(Node(v, distances[v]));
            }
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        // Read blank line
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int n, m;
        cin >> n >> m;

        // Initialize the graph
        vector<vector<pair<int, int>>> graph(n);

        // Read the edges
        for (int i = 0; i < m; ++i) {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].emplace_back(v, w);
            graph[v].emplace_back(u, w);
        }

        int t;
        cin >> t;  // source node

        // Dijkstra's algorithm
        vector<int> distances(n, INT_MAX);
        dijkstra(graph, t, distances,n);

        // Output the distances
        for (int i = 0; i < n; ++i) {
                if (distances[i] == INT_MAX) {
                    cout << "INF ";
                } else {
                    cout << distances[i] << " ";
                }
        }

        cout << endl;
    }

    return 0;
}
