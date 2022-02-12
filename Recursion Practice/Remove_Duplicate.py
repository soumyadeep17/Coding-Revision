s = 'xxyyzz'
list_s = list(s)
for i in range(len(list_s)):
    j = i+1
    while(j<len(list_s)):
        if list_s[i] == list_s[j]:
            continue
        else:
            list_s[i:j] = s[i]
            final_s = ''.join(list_s)
            break
print(final_s)