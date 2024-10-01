def gcd(u, v):
    while v != 0:
        r = u % v
        u = v
        v = r
    return u

if __name__ == '__main__':
    a = int(input('First value: '))
    b = int(input('Second value: '))
    print('gcd:', gcd(a,b))