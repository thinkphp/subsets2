f = [0]*100
fout = open("submultimi.out", "w")
def display():
    k = 0
    for i in range(1, n + 1):
        if f[i] == 1:
            fout.write(str(i) + " ")
            k = 1
    if k == 1:
       fout.write("\n")

def back(level):
    if level == n + 1:
        display()
    else:
        f[level] = 0
        back(level+1)
        f[level] = 1
        back(level+1)

def main():
    global n
    f = open("submultimi.in", "r")
    n = int(f.readline().strip())
    print(n)
    back(1)
main()
