```python
print("Hey You!!")
```

    Hey You!!
    


```python
print('1 + 1 =', 1 + 1)
print('10 - 7 =', 10 - 7)
print('2 * 2 =', 2 * 2)
print('5 / 3 =', 5 / 3)
print('5 // 3 =', 5 // 3)
print('5 % 3 =', 5 % 3)
print('5 ** 2 =', 5 ** 2)
```

    1 + 1 = 2
    10 - 7 = 3
    2 * 2 = 4
    5 / 3 = 1.6666666666666667
    5 // 3 = 1
    5 % 3 = 2
    5 ** 2 = 25
    


```python
upWidth, bottomWidth, height = 20, 10, 15
print(((upWidth + bottomWidth) * height) / 2)
```

    225.0
    


```python
diameter, pi = 30, 3.141592653589793
print(diameter/2 * diameter/2)
print("This circle's area is...", ((diameter/2) * (diameter/2))*pi, "cm2")
```

    225.0
    This circle's area is... 706.8583470577034 cm2
    


```python
print(False or True)
print(False and True)
```

    True
    False
    


```python
print(False and False)
print(False or False)
```

    False
    False
    


```python
print(True or True)
print(True and True)
```

    True
    True
    


```python
print('1 < 2 =', 1 < 2)
print('1 > 2 =', 1 > 2)
print('1 <= 2 =', 1 <= 2)
print('1 <= 1 =', 1 <= 1)
print('1 == 1 =', 1 == 1)
print('1 != 1 =', 1 != 1)
```

    1 < 2 = True
    1 > 2 = False
    1 <= 2 = True
    1 <= 1 = True
    1 == 1 = True
    1 != 1 = False
    


```python
print(id(1))
a = 'akin'
print(a[1], a[-1])
print(a[1:3])
print(a[:3])
print(len(a))
```

    140719517008808
    k n
    ki
    aki
    4
    


```python
word = "hey"
print(f"hey {word[:2]}")
```

    hey he
    


```python
pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679

print(f"pi>>{pi:50.45f}")
print(f"pi>>{pi:^50f}")
```

    pi>>   3.141592653589793115997963468544185161590576172
    pi>>                     3.141593                     
    


```python
squares = [1, 2, 3, 4, 5, 6, 7]
print(squares)
print(squares[2], "_", squares[3])
print(squares[2] + squares[3] - squares[-1])
print(squares + [1, 2, 3, 4, 5, 6, 7])
squares[4] = squares[1] * squares[3]
print(squares[4])
squares.append(squares[3] ** squares[4])
print(squares)
```

    [1, 2, 3, 4, 5, 6, 7]
    3 _ 4
    0
    [1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7]
    8
    [1, 2, 3, 4, 8, 6, 7, 65536]
    
