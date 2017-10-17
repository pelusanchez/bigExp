# BigExp

## The problem

Commond numerical problems requires large exponentiation numbers, for example, statistical use of factorial function (N!) applying not too large numbers (100!) could be a problem. If we do Stirling's aproximation, and apply logarithms, we get:
N! = exp(log(N^N*exp(-N))) = exp(N*exp(N)-N). The argument N*exp(N)-N could be got with any calculator. But if this argument is a little bit large (order 10^60), the exponential function would return a number that couldn't be carried directly with nowadays PC architecture or calculators.

## The solution

Most of cases of this problems only needs for an aproximation, but a order of magnitude.

### The algorithm


Let n = ax10^b, exp(ax10^b) = exp(10^b)^a. And exp(10^b) = exp(10^(b-1))^10. If we do this recursively, we could get (in theory) any exponent for large numbers.
