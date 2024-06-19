
# Problem ID: 1002
# Title: Area of a Circle
# Link: https://judge.beecrowd.com/en/problems/view/1002

# Description:
# The formula to calculate the area of a circumference is defined as A = π . R^2. Considering to this problem that π = 3.14159:
# Calculate the area using the formula given in the problem description.

# Input:
# The input contains a value of floating point (double precision), that is the variable R.



r = float(input())
n = 3.14159
x = n*(r*r)
print("A=%.4f" % x)
