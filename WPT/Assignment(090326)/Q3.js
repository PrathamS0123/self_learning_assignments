Object.prototype.functionName= function(...s){
    console.log("Prototype"+s);
}

Object.prototype.functionNaav= function(a1){
    console.log("Prototype"+a1);
}

let var1 = {
    print1(){
        console.log("Kasa ky Mandaliii...");
    }
}


let var2 = {
    i1 :100,
    i2 :200,
    print2(){
        add=i1+i2;
        console.log(add);
    }
}

var1.functionName("Whatsupp");
var2.functionName("hello");
var1.print1();
var1.functionNaav("Whatsupp");
var2.functionNaav("hello");
var2.print2();S