def average(x, y):
    return (x + y) / 2

def sqrt(a):
    def sqrt_update(x, a):
        return average(x, a / x)
    def sqrt_close(x):
        return approx_eq(x * x, a)
    return improve(sqrt_update, sqrt_close, 1.0, a)

def improve(update, close, guess, a):
    while not close(guess):
        guess = update(guess, a)
    return guess

def approx_eq(x, y):
    return abs(x - y) < 0.0001



print(sqrt(256)) # 16.000003814697265
print(sqrt(196)) # 14.000000000000002
print(sqrt(225)) # 15.000000000000004