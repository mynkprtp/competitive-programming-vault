// vector<vector<int>> roads = {{0, 1, 2}, {1, 2, 10}, {0, 2, 10}};
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class UnionFind {
public:
    vector<int> parent, size;

    UnionFind(int n) : parent(n), size(n, 1) {
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] == x) {
            return x;
        }
        return parent[x] = find(parent[x]);
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (size[rootX] < size[rootY]) {
                swap(rootX, rootY);
            }
            parent[rootY] = rootX;
            size[rootX] += size[rootY];
        }
    }

    int getSize(int x) {
        return size[find(x)];
    }
};

class Solution {
public:
    int countSets(int n, int maxDistance, vector<vector<int>>& roads) {
        sort(roads.begin(), roads.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[2] < b[2];
        });

        UnionFind uf(n + 1);
        int result = 0;

        for (const auto& road : roads) {
            int u = road[0], v = road[1], w = road[2];
            if (uf.find(u) != uf.find(v)) {
                int sizeU = uf.getSize(u);
                int sizeV = uf.getSize(v);
                uf.unite(u, v);

                if (max(sizeU, sizeV) <= maxDistance) {
                    result++;
                }
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    int n = 3;
    int maxDistance = 5;
    vector<vector<int>> roads = {{0, 1, 2}, {1, 2, 10}, {0, 2, 10}};
    int result = solution.countSets(n, maxDistance, roads);
    cout << result << endl;

    return 0;
}
