t = int(input())
lt = [1,2,4,8,16,32,64,128,256,512,1024,2048]
while(t>0):
    n = int(input())
    c = 0
    x = 0
    while(x<len(lt) and n>0):
        if(lt[x]>=n):
            if(lt[x]>n):
                n = n-lt[x-1]
                x = 0
                c+=1
            else:
                n = 0
                c+=1
        elif(x==len(lt)-1):
            n = n-lt[x]
            x = 0
            c+=1
        else:
            x+=1
    print(c)
    t-=1