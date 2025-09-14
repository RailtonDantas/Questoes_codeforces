n = 4
l = [0,1,2,3]
choosen = []
def choose(i):
    global n
    if(i == n):
        print(choosen)
        return
    choose(i+1)
    choosen.append(l[i])
    choose(i+1)
    choosen.pop()
choose(0)
        
