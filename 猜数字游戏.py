print('这是一个猜数字游戏')
answers = input('1开始游戏，2退出\n:')
answer = int(answers)
while answer == 1:
    a = input('猜我心里想的是几 ')
    number = int(a)
    import random
    secret = random.randint(1,100)
    while number != secret :
        if number > secret :
            print('太大了')
        else:
            print('太小了')
        a = input('重新猜吧: ')
        number = int(a)
    print('猜对了')
    answers = input('1重新游戏，2退出\n:')
    answer = int(answers)
print('游戏结束')