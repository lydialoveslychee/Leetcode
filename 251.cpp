class Vector2D {
public:
    queue<int> myqueue; 
    Vector2D(vector<vector<int>>& vec2d) {
        int m = vec2d.size();
        for(int i = 0; i < m; i++) {
            int n = vec2d[i].size();
            for(int j = 0; j < n; j++) {
                myqueue.push(vec2d[i][j]);
            }
        }
    }

    int next() {
        int result = myqueue.front();
        myqueue.pop();
        return result;
    }

    bool hasNext() {
        return !myqueue.empty();
    }
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D i(vec2d);
 * while (i.hasNext()) cout << i.next();
 */