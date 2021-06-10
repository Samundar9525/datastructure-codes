import json

json_data = '{ "name":"ramesh",' \
            '"age":23,' \
            '"marks":[100,230,334],' \
            '"married":true,' \
            '"subject":["maths","english"] }'
#data parsing take place here
pyth_obj=json.loads(json_data,sort_keys=True)
print(pyth_obj)