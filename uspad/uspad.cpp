#include <cmath>

class Position {
public:
    int x;
    int y;

    Position(int x = 0, int y = 0) : x(x), y(y) {}

    int Distance(const Position& other) const {
        int dx = x - other.x;
        int dy = y - other.y;
        return static_cast<int>(std::sqrt(dx * dx + dy * dy));
    }

    void MoveTowards(const Position& target) {
        if (x < target.x) x++;
        else if (x > target.x) x--;

        if (y < target.y) y++;
        else if (y > target.y) y--;
    }
};
