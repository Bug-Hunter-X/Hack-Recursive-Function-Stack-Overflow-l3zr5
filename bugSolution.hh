function foo(x: int): int {
  if (x < 0) {
    return 0; // Handle negative inputs
  } else if (x == 0) {
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
  echo bar(-5);
}

This improved version explicitly handles negative inputs in both `foo` and `bar` functions, preventing the stack overflow.