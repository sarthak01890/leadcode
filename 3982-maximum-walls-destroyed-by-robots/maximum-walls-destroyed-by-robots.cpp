class Solution {
public:
    vector<pair<int,int>> arr;
    vector<int> w;
    int n;

    vector<vector<int>> memo;

    int solve(int i, int nextDir) {

        if(i < 0)
            return 0;

        if(memo[i][nextDir] != -1)
            return memo[i][nextDir];

        int pos = arr[i].first;
        int dist = arr[i].second;

        int best = 0;

        // ---------------- FIRE LEFT ----------------

        int left = pos - dist;

        if(i > 0) {
            left = max(left, arr[i - 1].first + 1);
        }

        int l =
            lower_bound(w.begin(), w.end(), left)
            - w.begin();

        int r =
            upper_bound(w.begin(), w.end(), pos)
            - w.begin();

        int cntLeft = r - l;

        best = max(best,
                   solve(i - 1, 0) + cntLeft);

        // ---------------- FIRE RIGHT ----------------

        int right = pos + dist;

        if(i + 1 < n) {

            if(nextDir == 0) {
                // next robot fires left
                right = min(
                    right,
                    arr[i + 1].first -
                    arr[i + 1].second - 1
                );
            }
            else {
                // next robot fires right
                right = min(
                    right,
                    arr[i + 1].first - 1
                );
            }
        }

        if(right >= pos) {

            l =
                lower_bound(w.begin(), w.end(), pos)
                - w.begin();

            r =
                upper_bound(w.begin(), w.end(), right)
                - w.begin();

            int cntRight = r - l;

            best = max(best,
                       solve(i - 1, 1) + cntRight);
        }

        return memo[i][nextDir] = best;
    }

    int maxWalls(vector<int>& robots,
                 vector<int>& distance,
                 vector<int>& walls) {

        n = robots.size();

        for(int i = 0; i < n; i++) {
            arr.push_back({robots[i], distance[i]});
        }

        sort(arr.begin(), arr.end());

        w = walls;
        sort(w.begin(), w.end());

        memo.assign(n, vector<int>(2, -1));

        return solve(n - 1, 1);
    }
};