function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function bar(x: int): int {
  if (x < 0) {
    return 0;
  } else {
    return foo(x);
  }
}

function main(): void {
  echo bar(5);
}

This code has a subtle issue. If a user passes a negative number to the bar function, it will enter an infinite loop in foo function because x will never be equal to 0 and eventually cause a stack overflow. This is because the foo function uses recursion and lacks a base case for negative inputs.