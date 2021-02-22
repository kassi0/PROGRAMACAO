import json

with open('contas.json') as json_data:
    data = json.load(json_data)
    print (data)