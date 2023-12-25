#include <iostream>
#include <vector>

struct Point {
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
};

std::vector<Point> drawLine(int xa, int ya, int xb, int yb) {
    std::vector<Point> points;
    int dx = abs(xb - xa);
    int dy = abs(yb - ya);
    int p = 2 * dy - dx;
    int xEnd = 0;
    int x = xa, y = ya;

    points.push_back(Point(x, y));

    if (xa > xb) {
        x = xb;
        y = yb;
        xEnd = xa;
    }

    while (x < xEnd) {
        x++;
        if (p < 0) {
            p += 2 * dy;
        } else {
            y++;
            p += 2 * (dy - dx);
        }
        points.push_back(Point(x, y));
    }

    return points;
}

int main() {
    int xa = 2, ya = 2;
    int xb = 12, yb = 8;

    std::vector<Point> points = drawLine(xa, ya, xb, yb);

    for (const Point& point : points) {
        std::cout << "X: " << point.x << ", Y: " << point.y << std::endl;
    }

    return 0;
}
