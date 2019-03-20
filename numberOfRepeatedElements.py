a=list(map(int,input().split()))
b=[]
c=[]
for i in a:
    if i in b:
        c.append(i)
    else:
        b.append(i)
print(len(c))
