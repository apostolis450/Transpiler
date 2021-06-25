// a piece of miniscript code for demonstration purposes

const N = -100 : number;

var a,b : number;

function cube(i: number) : number {
 return i*i*i;
}

function add(n:number, k:number): number {
 var j: number;
 
 j = (N-n) + cube(k);
 writeNumber(j);
 return j;
}

/*
*	just testing multiline comments
*/

function start():void {
 a= readNumber();
 b= readNumber();
 add(a, b);
}
