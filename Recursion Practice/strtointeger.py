# Given a string ‘STR’ of length 'N'. Implement the atoi function. If there are no numbers in the string, return 0.
# In other words, given a string ‘STR’ convert the string to an integer.
# Recursion
def atoi(s):
    if len(s) == 1:
        if s.isnumeric():
            return s
        else:
            return ''
    if s[0].isnumeric() or s[0] == '-':
        return s[0] + atoi(s[1:])
    return atoi(s[1:])


# for loop
s = '-wiufhr8345834bdjfhbghj4983753984b'
x = ''
for i in range(len(s)):
    if s[i].isnumeric() or s[i]=='-':
        x=x+s[i]
print(type(int(atoi(s))))
print(type(atoi(s)))

