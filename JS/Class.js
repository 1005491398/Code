var base = {
	wtf: function () {
		console.log("Hello");
		debug("????")
	}
}

class child extends base {
	wtf: function () {
		super();
	}
}

base.wtf();
child.wtf();