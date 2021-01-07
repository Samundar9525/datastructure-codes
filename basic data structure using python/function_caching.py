import time
from functools import lru_cache
@lru_cache(maxsize=2)
def fun(n):
    time.sleep(n)
    return n

print("running start")
fun(3)
print("after 3 sec ")
fun(2)
print("after 2 more sec ")
fun(1)
print("after 1 sec ")
fun(3)
print("after 3  sec ")
fun(2)
print("after 2  sec ")
fun(3)
print("after 3 sec ")
fun(2)
print("after 2 sec ")
