a = '123'
def rev_int(a):
    if len(a) == 1:
        return a
    return rev_int(a[1:]) + a[0]

print(rev_int(a))
