var map = [
            [0,0,0,0,0,0,0,8],
            [1,2,3,0,5,6,7,8],
            [1,2,3,4,0,6,7,8],
            [1,2,3,4,0,0,0,0],
        ];
var mapD = [
			[0,0,0,0,0,0,0,0],
            [0,0,0,0,0,0,0,0],
            [0,0,0,0,0,0,0,0],
            [0,0,0,0,0,0,0,0],
		];

var card = [{x:0, y:0},{x:0, y:7}];

// // for (var x in map)
// // {
// // 	for (var y in map[x])
// // 	{
// // 		debug(x + " " + y)

// // 	}
// // }

// var treeNode = {}

function two (p1, p2) {
	var x1 = p1.x, y1 = p1.y, x2 = p2.x, y2 = p2.y;
	if (x1 == x2)
	{
		var a = Math.min(y1, y2);
		var b = Math.max(y1, y2);
		for (var i=a+1;i<b;i++)
		{
			if (map[x1][i] != 0)
			{
				return {flag: 0, index: i};
			}
		}
		return {flag: 1};
	}
	else if (y1 == y2)
	{
		debug("YYY" + y1 + " " + y2)
		var a = Math.min(x1, x2);
		var b = Math.max(x1, x2);
		for (var i=a+1;i<b;i++)
		{
			if (map[i][y1] != 0)
			{
				return {flag: 0, index: i};
			}
		}	
		return {flag: 1};
	} 
	else
	{
		return {flag: -1};
	}
}

debug(two(card[0], card[1]).flag);

function fk (argument) {
	// body...
	switch(two(card[0], card[1]).flag)
	{
		case 1:
			//直连
			break;
		case 0:
			//不直连 但在同一行或者列
			break;
		case -1:
			var p1 = {x: card[1].x, y: card[0].y},p2 = {x: card[0].x, y: card[1].y};
			var s1 = two(card[0], p1), s2 = two(card[1], p1);
			if (s1.flag && s2.flag)
			{
				//直连 一个拐点p1
			}
			else
			{
				for (var i=Math.min(s1.index, s2.index);i<Math.max(s1.index, s2.index);i++)
				{
					if (two({x:}))
				}
			}

			s1 = two(card[0], p2), s2 = two(card[1], p2);
			if (s1.flag && s2.flag)
			{
				//直连 一个拐点p2
			}
			else
			{
				// for (var x=card[0][0];)
			}
			break;
	}
}

// function go (startPos, direction, endPos)
// {
// 	switch(direction)
// 	{
// 		case "U":
// 			for (var i=startPos.x+1;i<=endPos.x;i++)
// 			{

// 			}
// 			break;
// 		case "D":
// 		case "L":
// 		case "R":
// 	}
// }

// function two (p1, p2) {
// 	mapD[p1.x][p1.y] = 1;
// 	var startPos, endPos;
// 	if (p1.y<p2.y)
// 	{
// 		startPos = p1;
// 		endPos = p2;
// 	}
// 	else
// 	{
// 		startPos = p2;
// 		endPos = p1;	
// 	}
// 	var step = endPos
// 	// var directions = [];
// 	// directions[0] = p2.x - p1.x>0?"L":"D";
// 	// directions[1] = p2.y - p1.x>0?"U":"L";
	

// 	for (var i=startPos.y;i<endPos.y;i++)
// 	{
// 		var step = (endPos.x-startPos.x)*1;
// 		var x = startPos.x;
// 		while(x)
// 		{
// 			if (map[x][y] != 0)
// 			{

// 			}
// 		}
// 	}
// }
