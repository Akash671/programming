# Python String Operations
str1 = 'Hello'
str2 ='World!'

# using +
print('str1 + str2 = ', str1 + str2)
# using *
print('str1 * 3 =', str1 * 3)



# Iterating through a string
count = 0
for letter in 'Hello World':
    if(letter == 'l'):
        count += 1
print(count,'letters found')



a="abcabcabcef"
print(a.lower())
print(a.upper())
print(a.find('e'))
print(a.replace('a', 'b'))

