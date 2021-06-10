import requests
url="https://reqres.in/api/users"
data={
    "name":"samundar",
    "job":"programmer"
}
r=requests.post(url=url, data=data)
print(r.status_code)
print(r.text)
