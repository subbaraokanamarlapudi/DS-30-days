n = [2,7,11,15]
target = 9
mp = {}

for i in range(len(n)):
    if (target - n[i]) in mp:
        print(mp[target - n[i]])
        print(i)
    mp[n[i]] = i