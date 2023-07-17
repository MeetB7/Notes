//variables

var myname = "meet";
// can't change by: myname[0] = "M"
myname = "Meet"; // can be changed later
// var can be used anywhere
let i = 1;
// let can only be used in scope where it is declared
const pi = 3.14;
// value of const can not be changed
myname = myname +" Brijwani";
console.log(myname);
console.log(myname.length);

function hello(name){
    var result = "Hello " + name + ", this is a function" 
    return result;
}
console.log(hello(myname));