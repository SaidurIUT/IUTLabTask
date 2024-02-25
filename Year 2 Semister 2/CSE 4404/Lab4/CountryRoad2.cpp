#include <bits/stdc++.h>
using namespace std;
#define MAXX 509
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
      return p.cost < cost; 
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
      else if (dis[u].back() != w) dis[u].push_back (w);

    //   if (dis[u].size() > 2) continue;

      for (int i = 0; i < G[u].size(); i++) {
         edge ne = G[u][i]; v = ne.to;
        //  if (dis[v].size() == 2) continue;

         int cur_dis = ne.w + curr.cost;
         pq.push (e1 (v, cur_dis));
      }
   }
   // if (dis[n].size() < 2) cout << "Impossible\n";
   // else cout << dis[n][1] << '\n';
    for(int i =0 ; i<n ; i++){
        if(dis[n].size()==0) cout << "Impossible\n";
        else cout << dis[n][1] << '\n';
    }

}
int main ()
{
   int tc, cas = 0, n, e, u, v, w,src;
   cin >> tc;
   while (tc--) {
      cin >> n >> e;
      for (int i = 0; i < e; i++) {
         cin >> u >> v >> w;
         G[u].push_back (edge(v, w));
         G[v].push_back (edge(u, w));
      }
      cin >> src; 
      cout << "Case " << ++cas << ": ";
      dijkstra (src , n);

      vector <edge> t1[MAXX];
      vector <ll> t2[MAXX];
      swap (t1, G);
      swap (t2, dis);
   }
}