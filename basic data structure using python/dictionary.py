d={"house":"ghar","food":"khana","chicken":"murga","fish":"machli"}
f={"ghar":"graham","khana":"bhojan","murga":"kukuta","machli":"matashaya"}
a=input("enter the word : ")
for i in d.keys():
    if (a == i):
        for j in f.keys():
            if(d.get(i)==j):
                 print("sanskrit : " + f[j])


