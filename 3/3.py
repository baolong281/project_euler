import time
from functools import lru_cache

n = int(input())

@lru_cache(maxsize=None)
def is_prime(n):
    for m in range(2, n):
        if n % m == 0: return False
    return True

start = time.time()

factor = n - 1
while n >= 0:
    if n % factor == 0 and is_prime(factor):
        break

    factor -= 1

end = time.time()

print(f"Execution time: {end - start} seconds")
print(f"Largest prime factor: {factor}")
