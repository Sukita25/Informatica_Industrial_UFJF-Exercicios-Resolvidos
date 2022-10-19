#https://wiki.python.org/moin/BitManipulation
    #      |  |  |  | | |
A = int('0000010000010101',2)
print(A)
B = [(A & 0b0000000000000001) >0,
    (A & 0b0000000000000100) >0,
    (A & 0b0000000000010000) >0,
    (A & 0b0000000010000000) >0,
    (A & 0b0000010000000000) >0,
    (A & 0b0010000000000000) >0]

for x in B:
    print(x)
    
C ='00'+str(int(B[5]))+'00'+str(int(B[4]))+'00'+str(int(B[3]))+'00'+str(int(B[2]))+'0'+str(int(B[1]))+'0'+str(int(B[0]))
C = int(C,2)
print(C)
