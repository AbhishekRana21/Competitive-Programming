t = int(input())
while(t>0):
    n = int(input())
    s = input()
    if(s[0:n//2]==s[n//2:n]):
        print("YES")
    else:
        print("NO")
    t-=1;