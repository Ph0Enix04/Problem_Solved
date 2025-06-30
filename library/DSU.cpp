
class DSU {                            
private:
  vi p, rank, setSize;                         
  int numSets;
public:
  DSU(int N) {
    p.assign(N, 0); for (int i = 0; i < N; ++i) p[i] = i;
    rank.assign(N, 0);                         
    setSize.assign(N, 1);                      
    numSets = N;                                
  }

  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }

  int numDisjointSets() { return numSets; }      
  int sizeOfSet(int i) { return setSize[findSet(i)]; }

  void unionSet(int i, int j) {
    if (isSameSet(i, j)) return;                
    int x = findSet(i), y = findSet(j);        
    if (rank[x] > rank[y]) swap(x, y);         
    p[x] = y;                                   
    if (rank[x] == rank[y]) ++rank[y];          
    setSize[y] += setSize[x];                  
    --numSets;                                  
  }
};
