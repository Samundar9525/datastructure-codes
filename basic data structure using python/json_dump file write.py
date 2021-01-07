import json
#python data
with open('sam.json', "w") as file_write:
    python_data={
        "name":"samundar",
        "age":24,                                        #it is a dictionary
        "marks":[70,80,100],                             #it is a list
        "books":("harrypotter","jungle book","godan"),   #it is a tuple
        "married":False
    }
    json.dump(python_data, file_write, indent=4, separators=(',', ': '))
    print("data is sucessfully written in the file")

#this will write the data in your json file
#NOTE: use append "a"  in the file access mode in order to append data to  afile



