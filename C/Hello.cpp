#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>

const int xCount = 10;
const int yCount = 10;

int map[xCount][yCount] = {
	{0,0,0,0,0,0,0,0,0,0},
	{0,1,1,1,1,1,1,1,1,0},
	{0,1,0,0,0,0,0,0,0,0},
	{0,1,0,0,0,0,0,0,0,0},
	{0,1,0,0,0,0,0,0,0,0},
	{0,1,0,0,0,0,0,0,0,0},
	{0,1,0,0,0,0,0,0,0,0},
	{0,1,0,0,0,0,0,0,0,0},
	{0,1,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0},
};

class Vec2 {
public:
	int x, y, f, g, h;
	Vec2(int _x, int _y):x(_x), y(_y), g(0) {}
	~Vec2() {}
	
	void setGHF(int _g, int _h)
	{
		g = _g, h = _h;
		f = g+h;
	}
	
	std::string toString() const
	{
		return std::to_string(x) + "_" + std::to_string(y);
	}
	
	bool equal(const Vec2 a) const
	{
		return a.x == x && a.y == y;
	}
};

std::vector<Vec2> open;
std::map<std::string, Vec2> close;

int getG(const Vec2 pre)
{
	return pre.g+1;
}

int getH(const Vec2 &a, const Vec2 &goal)
{
	return abs(a.x-goal.x) + abs(a.y-goal.y);
}

bool chkPoint(int x, int y, const Vec2 &goal) {
	Vec2 point(x, y);
	auto key = point.toString();
	if ((close.find(key)) == close.end()) {
		close.insert(std::pair<std::string, Vec2> (key, point));
		point.setGHF(getG(point), getH(point, goal));
		open.push_back(point);
	}
	else {
		
	}
}

void setPoint(const Vec2 &point, const Vec2 &goal) {
	int x = point.x;
	int y = point.y;
	int u = x+1;
	int d = x-1;
	int l = y-1;
	int r = y+1;
	if (u>0 && map[u][y]!=0) chkPoint(u, y, goal);
	if (d<xCount && map[d][y]!=0) chkPoint(d, y, goal);
	if (l>0 && map[x][l]!=0) chkPoint(x, l, goal);
	if (r<yCount && map[x][r]!=0) chkPoint(x, r, goal);
}

void hello(const Vec2 &start, const Vec2 &goal) {
	open.push_back(start);
	while (!open.empty()) {
		int minf = 100000, index = 0, i = 0;

		for (auto tmp : open) {
			if (minf>tmp.f) {
				minf = tmp.f;
				index = i;
			}
			i++;
		}
		Vec2 nowPoint = open[index];
		open[index] = open.back();
		open.pop_back();		
		if (goal.equal(nowPoint))
			return;
		else 
		{
			setPoint(nowPoint, goal);
		}
	}	
}

int main(int argc, char *argv[]) {
	printf("Hello, CT. Welcome to CodeRunner!");
	hello(Vec2(0, 0), Vec2(9, 9));
}