let arr = [1,2,3,4,5,6,7,8,9,10]
console.log(arr);

let even = arr.filter((num) => num % 2 == 0);
console.log(even);

let odd = arr.filter((num) => num%2 != 0);
console.log(odd);

let sort = arr.sort((n1,n2) => n1-n2);
console.log(sort);