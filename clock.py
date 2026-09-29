# 12 to 24 hrs format

time = input("Enter the time: ")

#t = time.split(":")

if time[-2:] == "AM":
    print(time[:-2])

elif time[-2:] == "PM" and time[:2] == "12":
    print(time[:-2])

elif time[-2:] == "AM" and time[:2] == "12":
    print("00" + time[2:-2])

elif time[-2:] == "PM":
    print(3)
    print(str(int(time[:2]) + 12) + time[2:-3])