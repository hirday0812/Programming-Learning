import time

a = "="

while True:
    print(a)
    a += "=="
    time.sleep(0.05)   # wait 0.5 seconds before printing next
