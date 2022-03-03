# s = 'xxyyzz'
# list_s = list(s)
# for i in range(len(list_s)):
#     j = i+1
#     while(j<len(list_s)):
#         if list_s[i] == list_s[j]:
#             continue
#         else:
#             list_s[i:j] = s[i]
#             final_s = ''.join(list_s)
#             break
# print(final_s)
##better
import time
string = 'aaaaa'
def remove_dup(s,n):
    new_s = string[0]
    for i in range(1,n):
        if s[i] not in new_s or s[i]!=s[i-1]:
            new_s+=s[i]
    return new_s
t1 = time.time()
print(remove_dup(string,len(string)))
t2 = time.time()

## max recursion depth ho jata hain
def removeConsecutiveDuplicates(s):
    if len(s)<2:
        return s
    if s[0]!=s[1]:
        return s[0]+removeConsecutiveDuplicates(s[1:])
    return removeConsecutiveDuplicates(s[1:])
t3 = time.time()
print(removeConsecutiveDuplicates(string))
t4 = time.time()

print(t2-t1,t4-t3)