import sys
import box
import time
import random


print(len(sys.argv))

if len(sys.argv) < 3:
    print("Not enough arguments (needs 3)")
if len(sys.argv) > 3:
    print("Too many arguments (needs 3)")
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
start_time = time.time()
while len(numbers) != 0 and (time.time()- start_time)< float(sys.argv[2]) :
    droll1 = random.randint(1,6)
    droll2 = random.randint(1,6)
    
    if not box.isvalid(droll1+ droll2, numbers):
        break
    print("Roll: {}".format(droll1 + droll2))
    print("Time Remaining: {}".format(float(sys.argv[2]) - (time.time()-start_time)))
    player_input = input("Numbers to eliminate: ")
    ints = box.parse_input(player_input, numbers)
    if len(ints) == 0:
        break
    for x in ints:
        numbers.remove(x)
    print(numbers)
print("Score for player {}: {} points".format(sys.argv[1], sum(numbers)))
print("Time played: {}".format(time.time()-start_time))

if (time.time()- start_time) > float(sys.argv[2]):
    print("You ran out of time, nitwit.")
elif len(ints) == 0:
    print('Invalid input. Game over')
elif len(numbers) == 0:
    print("Winner, winner!!!!")
else: print("Number's can't match roll! Game over.")