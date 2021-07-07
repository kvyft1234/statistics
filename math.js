function factorial(n){let result = 1; for(let i=1; i<n+1; i++){result *= i} return result;}
function combination(n,r){return factorial(n)/factorial(r)/factorial(n-r)}
function p(n){return combination(100,n)/2**100}
var sum=0;
for(let i=50; i<=55; i++){sum+=p(i)}

document.querySelectorAll('pre')[3].innerText=sum;