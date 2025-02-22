#include <iostream>
#include <queue>
#include <unordered_set>
#include <utility>
using namespace std;

struct State {
    int x, y;
    int remainingBikeUses;
    int time;
    State(int _x, int _y, int _remainingBikeUses, int _time) : x(_x), y(_y), remainingBikeUses(_remainingBikeUses), time(_time) {}
    bool operator==(const State& other) const {
        return x == other.x && y == other.y && remainingBikeUses == other.remainingBikeUses;
    }
};

struct StateHash {
    size_t operator()(const State& s) const {
        return hash<int>()(s.x) ^ hash<int>()(s.y) ^ hash<int>()(s.remainingBikeUses);
    }
};

int bidirectionalBFS(int a, int b, int k, int l) {
    queue<State> startQueue, endQueue;
    unordered_set<State, StateHash> startVisited, endVisited;

    startQueue.push(State(0, 0, k, 0));
    startVisited.insert(State(0, 0, k, 0));
    endQueue.push(State(a, b, k, 0));
    endVisited.insert(State(a, b, k, 0));

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    while (!startQueue.empty() && !endQueue.empty()) {
        if (startQueue.size() > endQueue.size()) {
            swap(startQueue, endQueue);
            swap(startVisited, endVisited);
        }

        int size = startQueue.size();
        for (int i = 0; i < size; ++i) {
            State current = startQueue.front();
            startQueue.pop();

            int x = current.x;
            int y = current.y;
            int remainingBikeUses = current.remainingBikeUses;
            int time = current.time;

            State oppositeState(x, y, remainingBikeUses, 0);
            if (endVisited.find(oppositeState) != endVisited.end()) {
                auto it = endVisited.find(oppositeState);
                return time + it->time;
            }

            for (int j = 0; j < 4; ++j) {
                int newX = x + dx[j];
                int newY = y + dy[j];
                State newState(newX, newY, remainingBikeUses, time + 1);
                if (startVisited.find(newState) == startVisited.end()) {
                    startQueue.push(newState);
                    startVisited.insert(newState);
                }
            }

            if (remainingBikeUses > 0) {
                int newRemainingBikeUses = remainingBikeUses - 1;
                int bikeMoves[4][2] = {{x + l, y}, {x - l, y}, {x, y + l}, {x, y - l}};
                for (int j = 0; j < 4; ++j) {
                    int newX = bikeMoves[j][0];
                    int newY = bikeMoves[j][1];
                    State newState(newX, newY, newRemainingBikeUses, time);
                    if (startVisited.find(newState) == startVisited.end()) {
                        startQueue.push(newState);
                        startVisited.insert(newState);
                    }
                }
            }
        }
    }
    return -1;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int a, b, k, l;
        cin >> a >> b >> k >> l;
        int result = bidirectionalBFS(a, b, k, l);
        cout << result << endl;
    }
    return 0;
}