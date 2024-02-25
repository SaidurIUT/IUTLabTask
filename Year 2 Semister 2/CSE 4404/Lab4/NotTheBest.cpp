// Robin has moved to a small village and likes visiting one of his best friends. He usually takes a longer route, because he likes the scenery along the way. He has decided to take the second-best rather than the shortest path. He knows that there must be a second-best path.

// The countryside consists of R bidirectional roads, each linking two of the N intersections, conveniently numbered from 1to N. Robin starts at intersection 1, and his friend is at intersection N.

// The second-best path may share roads with any of the shortest paths, and it may backtrack i.e. use the same road or intersection more than once. The second-best path is the shortest path whose length is longer than the shortest path(s) (i.e. if two or more shortest paths exist, the second-shortest path is the one whose length is longer than those but no longer than any other path).

// Input
// Input starts with an integer T (≤ 10), denoting the number of test cases.

// Each case contains two integers N (1 ≤ N ≤ 5000) and R (1 ≤ R ≤ 105). Each of the next R lines contains three space-separated integers: u, v and w that describe a road that connects intersections u and v and has length w (1 ≤ w ≤ 5000).

// Output
// For each case, print the case number and the second best shortest path as described above.



// Input

// 2
// 3 3
// 1 2 100
// 2 3 200
// 1 3 50
// 4 4
// 1 2 100
// 2 4 200
// 2 3 250
// 3 4 100

// Output

// Case 1: 150
// Case 2: 450





#include <bits//stdc++.h>
using namespace std;
#define MAXX 5009
#define inf 1e18
typedef long long ll;
struct edge {
   int to, w;
   edge () {}
   edge (int a, int b) {to = a; w = b;}
};
struct e1 {
   int city, cost;
   e1(){}
   e1 (int a, int b) {city = a; cost = b;}
   bool operator < (const e1 &p) const {
      return p.cost < cost; //small to large
   }
};
vector <edge> G[MAXX];
vector <ll> dis[MAXX];



void dijkstra (int src, int n) {
   priority_queue <e1> pq;
   int u, v, w;
   pq.push (e1(src, 0));
   while (!pq.empty()) {
      e1 curr = pq.top(); pq.pop();
      u = curr.city; w = curr.cost;
      if (dis[u].size() == 0) dis[u].push_back (w);
      else if (dis[u].back() != w) dis[u].push_back (w); //same path distance ignored

      if (dis[u].size() > 2) continue;

      for (int i = 0; i < G[u].size(); i++) {
         edge ne = G[u][i]; v = ne.to;
         if (dis[v].size() == 2) continue;

         int cur_dis = ne.w + curr.cost;
         pq.push (e1 (v, cur_dis));
      }
   }
   if (dis[n].size() < 2) cout << "Impossible\n";
   else cout << dis[n][1] << '\n';
}
int main ()
{
   int tc, cas = 0, n, e, u, v, w;
   cin >> tc;
   while (tc--) {
      cin >> n >> e;
      for (int i = 0; i < e; i++) {
         cin >> u >> v >> w;
         G[u].push_back (edge(v, w));
         G[v].push_back (edge(u, w));
      }
      cout << "Case " << ++cas << ": ";
      dijkstra (1, n);

      vector <edge> t1[MAXX];
      vector <ll> t2[MAXX];
      swap (t1, G);
      swap (t2, dis);
   }
}
