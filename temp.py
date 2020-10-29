out=[]
lis=[ 23,29,7,63,55,45,41,52,40,33,27,55,45,41,52,40,33,27,60,43,54,54,54,27,54,45,35,44,48,123,123,57  ]
for i in lis:
    out.append(i^68)
strout=[chr(i) for i in out]
print("".join(strout))