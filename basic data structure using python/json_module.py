import json
#python data
python_data={
    "name":"samundar",
    "age":24,                                        #it is a dictionary
    "marks":[70,80,100],                             #it is a list
    "books":("harrypotter","jungle book","godan"),   #it is a tuple
    "married":False
}
print("python data :\n ",python_data)
json_data=json.dumps(python_data)
print("json data : \n ",json_data)
