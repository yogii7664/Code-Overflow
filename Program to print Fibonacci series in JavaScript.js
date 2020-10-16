// fibonacci series

let inputNum = prompt('Enter a Number:');
let num1 = 0, n2 = 1, nextVal;

nextVal = n1 + n2;

while(nextVal <= inputNum) {
  num1 = num2;
  n2 = nextVal;
  nextVal = n1 + n2;
}
