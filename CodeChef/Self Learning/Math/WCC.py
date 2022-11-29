t = int(input())
while(t):
    p = int(input())
    st = input()
    c = 0
    d= 0
    n = 0
    for x in st:
        if(x=='C'):
            c+=1
        elif(x=='D'):
            d+=1
        else:
            n+=1
    if(c>n):
        print(60*p)
    elif(c<n):
        print(40*p)
    else:
        print(55*p)
    t-=1