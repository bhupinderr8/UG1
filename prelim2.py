a=0
b=1
n=int(raw_input())
for i in range(0,n):
    if i==0:
        print "0 \t",
    elif i==1:
        print "1 \t",
    else:
        b=a+b
        a=b-a
        print str(b),
        print " \t",
