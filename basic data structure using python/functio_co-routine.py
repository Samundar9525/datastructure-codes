def search():
    import time
    #suppose we acess a database having only name
    database=["samundar","rahul","ramesh"]
    time.sleep(3)

    while(1):
        text=(yield)
        if text in database:
            print("data found")
        else:
            print("data not found")

find=search()
next(find)
find.send("samundr")
find.send("samundar")
find.send("rahul")
find.send("kishna")
find.send("tony")
find.send("ramesh")

