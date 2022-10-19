#https://wiki.python.org/moin/BitManipulation
    #      |  |  |  | | |    
A = int('0000010000010101',2)
print(A)
B = (A & 0b0000000000000001) >0
C = (A & 0b0000000000000100) >0
D = (A & 0b0000000000010000) >0
E = (A & 0b0000000010000000) >0
F = (A & 0b0000010000000000) >0
G = (A & 0b0010000000000000) >0
print(B)
print(C)
print(D)
print(E)
print(F)
print(G)
