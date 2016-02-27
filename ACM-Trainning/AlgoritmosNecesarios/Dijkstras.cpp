#include <bits/stdc++.h>

#define X first
#define Y second
#define LI long long
#define MP make_pair
#define PB push_back
#define SZ size()
#define SQ(a) ((a)*(a))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

using namespace std;

typedef int V;          // tipo de costes
typedef pair<V,int> P;  // par de (coste,nodo)
typedef set<P> S;       // conjunto de pares

int N;                  // numero de nodos
vector<P> A[10001];     // listas adyacencia (coste,nodo)

V dijkstra(int s, int t) {
  S m;                          // cola de prioridad
  vector<V> z(N, 1000000000);   // distancias iniciales
  z[s] = 0;                     // distancia a s es 0
  m.insert(MP(0, s));           // insertar (0,s) en m
  while (m.SZ > 0) {
    P p = *m.begin();   // p=(coste,nodo) con menor coste
    m.erase(m.begin()); // elimina este par de m
    if (p.Y == t) return p.X; // cuando nodo es t, acaba
    // para cada nodo adjacente al nodo p.Y
    for (int i = 0; i < (int)A[p.Y].SZ; i++) {
      // q = (coste hasta nodo adjacente, nodo adjacente)
      P q(p.X + A[p.Y][i].X, A[p.Y][i].Y);
      // si q.X es la menor distancia hasta q.Y
      if (q.X < z[q.Y]) {
	         m.erase(MP(z[q.Y], q.Y)); // borrar anterior
	         m.insert(q);              // insertar q
	         z[q.Y] = q.X;             // actualizar distancia
      }
    }
  }
  return -1;
}

int main() {
  N = 5;             // solucion 0-1-2-4-3-5, coste 11
  A[0].PB(MP(7, 1)); // arista (0, 1) con coste 2
  A[0].PB(MP(2, 3)); // arista (0, 2) con coste 5
  A[1].PB(MP(1, 2)); // arista (1, 2) con coste 2
  A[1].PB(MP(2, 3)); // arista (1, 3) con coste 7
  A[2].PB(MP(5, 4));
  A[3].PB(MP(5, 4));
  A[3].PB(MP(8, 2)); // arista (2, 4) con coste 2
  A[3].PB(MP(3, 2));
  A[4].PB(MP(4, 2)); // arista (4, 3) con coste 2

  cout << dijkstra(0, 4) << endl;
}
