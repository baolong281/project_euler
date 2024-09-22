out = 2

curr = 2
last = 1

while curr < 4000000:
    temp = curr
    curr = curr + last
    last = temp

    if curr % 2 == 0:
        out += curr

print(f"ans {out}")
