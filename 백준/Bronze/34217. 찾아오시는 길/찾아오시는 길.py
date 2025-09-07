a, b = map(int, input().split())
c, d = map(int, input().split())

han_time = a+c 
yong_time = b+d 

if han_time < yong_time:
    print("Hanyang Univ.")
elif yong_time < han_time:
    print("Yongdap")
else:
    print("Either")