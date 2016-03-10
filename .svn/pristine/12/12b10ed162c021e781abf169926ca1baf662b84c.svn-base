var map = [
            [0,0,0,0,0,0,0,0],
            [0,2,3,0,5,6,7,0],
            [0,2,3,0,5,6,7,0],
            [0,2,3,0,0,0,0,0],
        ];

function print () {
	var str = "";
	for (var xx in arguments)
		str = str + arguments[xx] + "\t";
	debug(str);
}

function vec2(x, y) {
	this.x = x;
	this.y = y;
	this.toString = function(flag) {
		if (flag)
			debug(x + "_" + y);
		return x + "_" + y;
	}
	this.equal = function(vec2) {
		return vec2.x == this.x && vec2.y == this.y;
	}
}

var FindLine = {
	_map: null,
	_start: null,
	_goal: null,
	_points: [[], []],
	_mapD: {},

	ctor: function () {
		this._map = map;
		this._points = [[], []];
		this._mapD = {};
		return this;
	},

	two: function(p1, p2) {
		var x1 = p1.x, y1 = p1.y, x2 = p2.x, y2 = p2.y;
		var flagX = (x1 == x2), flagY = (y1 == y2);
		var a = flagX?Math.min(y1, y2):flagY?Math.min(x1, x2):null;
		var b = flagX?Math.max(y1, y2):flagY?Math.max(x1, x2):null;

		if (a!==null && b!==null)
		{
			for (var i=a+1;i<b;i++)
			{
				var x = flagX?x1:i;
				var y = flagX?i:y1;
				if (this._map[x][y] != 0)
				{

					return false;
				}
			}
			return true;
		}

		return false;
	},

	chkPoint: function(x, y) {
		return x>=0 && x<this._map.length && y>=0 && y<this._map[0].length
	},

	go: function(startPos, step, array, isY) {
		while(true)
		{
			var x = isY?startPos.x:startPos.x + step;
			var y = isY?startPos.y + step:startPos.y;
			if (!this.chkPoint(x, y))
				break;

			// print("WTf", x, y, step);
			if (this._map[x][y] == 0)
			{
				var point = new vec2(x, y);
				var key = point.toString();
				if (this._mapD[key] == undefined)
				{
					this._mapD[key] = point;
					if (array)
						array.push(point);
				}
				else
				{
					if (point.equal(this._goal))
					{
						debug("1Done!!!")
						return true;
					}
					else
					{
						debug("2Done!!!")
						return true;	
					}
				}
			}
			else
				break;
			
			if (step>0)
				step++;
			else
				step--;
		}
		return false;
	},

	getLine: function(p1, p2) {
		this._start = p1;
		this._goal = p2;
		this._mapD = {};
		this._mapD[p1.toString()] = 1;
		this._mapD[p2.toString()] = 1;

		var flag1 = this.go(p1, 1, this._points[0], false) ||
					this.go(p1, -1, this._points[0], false) ||
					this.go(p1, 1, this._points[1], true)	||
					this.go(p1, -1, this._points[1], true);

		if (flag1)
		{
			// 直连
			return ;
		}
		var flag2 = this.go(p2, 1, null, false) ||
					this.go(p2, -1, null, false) ||
					this.go(p2, 1, null, true) ||
					this.go(p2, -1, null, true);

		if (flag2)
		{
			// 一拐
			return ;
		}

		for (var x in this._points)
		{
			for (var y in this._points[x])
			{
				var point = this._points[x][y];
				var key = (x==0)?point.x+"_"+p2.y:p2.x+"_"+point.y;
				// debug("Key is "+key);
				if (this._mapD[key] != undefined && this.two(point, this._mapD[key]))
				{
					debug("3Done!!!")
					// point.toString(true);
					// print("Key is", key);
					return ;
				}
			}	
		}
		
		return ;
	}
}

var TestCase = [
				// [new vec2(3, 0), new vec2(3, 7)],
				// [new vec2(3, 7), new vec2(3, 0)],
				// [new vec2(3, 0), new vec2(0, 4)],
				[new vec2(3, 0), new vec2(2, 3)],
				[new vec2(0, 0), new vec2(3, 7)],
				[new vec2(0, 2), new vec2(0, 6)],
				[new vec2(0, 3), new vec2(3, 3)],
				]
for (var index in TestCase)
{
	print(index + "-----Start----")
	FindLine.ctor().getLine(TestCase[index][0], TestCase[index][1]);
	print(index + "-----END----")
}