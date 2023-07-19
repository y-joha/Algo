# Portfolio

------------------------Fibo.c---------------------------
is my implementation to create Fibonacci sequance
one iterative
one recursive

(Without memoization)

*********************Recursive**************************
First thing to remember when working with recursive 
function is the one must undestand what is the Stop Condition

in Fibonacci case its the index of the the client wants

thus the test will be performed on the index provided

PayAttention!
-> fib sequence is 0 1 1 2 3 5 8 13 21
meaning once the index is equal to 
3
is when you want to start accumulating the recursive stack

thus having the stop condition as
if(3 < index)
{
    return 1;
}

allows for the recurtion to stop at the correct location


*********************Iterative**************************

iterative is the "Simpler solution"
in which the index is the condition of the 
while loop
while(--index)
{
    result = a + b;
    a = b;
    b = result;
}

by running this code you recive the correct index
of the sequance;


---------------------------------------------------