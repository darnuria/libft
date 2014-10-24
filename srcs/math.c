#include "stdint.h"
#include "my_math.h"
#include <stdlib.h>

uint64_t math_factorial_acc(uint64_t acc, uint32_t n) {
  if (!n) {
    return (acc);
  } else {
    return (math_factorial_acc(acc * n, n - 1));
  }
}

uint64_t math_factorial(uint32_t n) {
  return (math_factorial_acc(1, n));
}

uint64_t math_factorial_rec(uint32_t n) {
  if (!n) {
    return (1);
  } else {
    return (n * math_factorial_rec(n - 1));
  }
}

uint64_t math_factorial_iter(uint32_t n) {
  uint64_t f;
  for (f = 1; n; n--) {
    f *= n;
  }
  return (f);
}

long double math_pow(long double x, long int n) {
  if (n == 0) {
    return (1);
  }

  long double temp = math_pow(x, n / 2);

  if (n % 2 == 0) {
    return (temp * temp);
  } else {
    if (n > 0) {
      return (x * temp * temp);
    } else {
      return (temp * temp / x);
    }
  }
}

long double math_sqrt(uint64_t n) {
  const long double a = (long double) n;
  long double x = 1;

  for (size_t i = 0; i < n; i++) {
    x = 0.5 * ( x + a / x );
  }
  return (x);
}

/*
 * derivated E[-1:1]
 * Limited devellopement near 0.
 * Sum [ (-1)^n * x^(2n) / (2n)! ]
 * infinite : max long double
 */

static
long double math_taylor_cos(long double x) {
  uint64_t acc = 1;
  long double  sum = 0;

    for (uint64_t n = 0; abs(n) < K_DEGREE + 1; n++) {
      acc = math_factorial_acc(acc, 2 * n);
      sum += (math_pow(-1, n) * math_pow(x, 2 * n) / acc);
    }
  return (sum);
}

long double math_cos(long double angle) {
  uint8_t sign = 1;

    if (angle < 0) {
      angle *= -1;
    }
  if (angle == 0) {
    return (1);
  } else if (angle == PI / 2) {
    return (0);
  } else if (angle > PI / 2) {
    angle = PI - angle;
    sign = -1;
  }
  return (sign * math_taylor_cos(angle));
}

/*
 * Limited devellopement near 0.
 * for k = 0.
 * Sum [(-1)^k * x / x^(2k + 1)!)]
 * On [0, infinite[
 * infinite : max long double.
 */

static
long double math_taylors_sin(long double x) {
  long double  sum = 0;

  for (uint64_t n = 0, acc = 0; abs(n) < K_DEGREE + 1; n++) {
    acc = math_factorial_acc(acc, 2 * n + 1);
    sum += (math_pow(-1, n) * math_pow(x, 2 * n + 1));
  }
  return (sum);
}

long double math_sin(long double x) {
  int sign = 1;

  if (x < 0) {
    x *= -1;
    sign = -1;
  }
  if (x == 0) {
    return (0);
  } else if (x == PI / 2) {
    return (1);
  } else if (x > PI / 2) {
    x = PI - x;
  }
  return (sign * math_taylors_sin(x));
}
