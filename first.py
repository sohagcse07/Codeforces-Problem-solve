
t = int(input())


for _ in range(t):
    
    n = int(input())
    
    a = list(map(int , input().split()))

    
    a.sort()
    
    ok = False
    
    
    for i  in range(1 , n ):
        
        if ( a[i] == a[i-1]):
            
            ok = True
            break
        
    
    if ok:
        print("Yes")
    else:
        print("No")