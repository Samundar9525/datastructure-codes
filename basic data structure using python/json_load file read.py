import json
with open('sam.json') as file_obj:
    python_data = json.load(file_obj)
print(python_data)