#include "stdint.h"
#include "my_math.h"

uint64_t math_factorial_acc(uint64_t acc, uint32_t n) {
  if (!n) {
    return (acc);
  } else {
    return (ft_factorial_acc(acc * n, n - 1));
  }
}

uint64_t math_factorial(uint32_t n) {
  return (ft_factorial_acc(1, n));
}

uint64_t math_factorial_rec(uint32_t n) {
  if (!n) {
    return (1);
  } else {
    return (n * ft_factorial_rec(n - 1));
  }
}

uint64_t math_factorial_iter(uint32_t n) {
  uint64_t f;
  for (f = 1; n; n--) {
    f *= n;
  }
  return (f);
}
float ft_floorf(float f) {
  return ((float) ((int) (f - 0.5) / 1));
}

double ft_floor(double d) {
  return ((double) ((int) (d - 0.5) / 1));
}

double long ft_floorl(double long dl) {
  return ((double long) ((int) (dl - 0.5) / 1));
}

long double ft_pow(long double x, long int n) {
  if (n == 0) {
    return (1);
  }

  long double temp = ft_pow(x, n / 2);

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

long double ft_sqrt(uint64_t n) {
  const long double a = (long double) n;
  long double x = 1;

  for (size_t i = 0; i < n; i++) {
    x = 0.5 * ( x + a / x );
  }
  return (x);
}

/*
 ** Return Absolute value of x.
 */

uint64_t ft_abs(int64_t x) {
  if (x < 0) {
    return (-x);
  } else {
    return (x);
  }
}

float ft_ceilf(float f) {
  return ((float) ((int) (f + 0.5) / 1));
}

double ft_ceil(double d) {
  return ((double) ((int) (d + 0.5) / 1));
}

double long ft_ceill(double long dl) {
  return ((double long) ((int) (dl + 0.5) / 1));
}

/*
 * derivated E[-1:1]
 * Limited devellopement near 0.
 * Sum [ (-1)^n * x^(2n) / (2n)! ]
 * infinite : max long double
 */

static
long double ft_taylor_cos(long double x) {
  uint64_t acc = 1;
  long double  sum = 0

    for (uint64_t n = 0; ft_abs(n) < K_DEGREE + 1; n++) {
      acc = ft_factorial_acc(acc, 2 * n);
      sum += (ft_pow(-1, n) * ft_pow(x, 2 * n) / acc);
    }
  return (sum);
}

long double ft_cos(long double angle) {
  uint8_t sign = 1

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
  return (sign * ft_taylor_cos(angle));
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

  for (uint64_t n = 0, acc = 0; ft_abs(n) < K_DEGREE + 1; n++) {
    acc = ft_factorial_acc(acc, 2 * n + 1);
    sum += (ft_pow(-1, n) * ft_pow(x, 2 * n + 1));
  }
  return (sum);
}

long double math_sin(long double x)
{
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
  return (sign * ft_taylor_sin(x));
}
