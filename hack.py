test=int(raw_input())
while test>0:
    a,b=raw_input.split(' ')
    if sorted(a)==sorted(b):
        print "YES"
    else:
        print "NO"
    test=test-1
