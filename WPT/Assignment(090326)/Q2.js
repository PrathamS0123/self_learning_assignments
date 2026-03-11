const square = n =>n*n;
const cube = n =>n*n*n;

function a1(n,callback)
{
	console.log(callback(n));
	
}

a1(3,square);
a1(2,cube);