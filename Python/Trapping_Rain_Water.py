import sys


# Function to find the amount of water that can be trapped within
# a given set of bars in linear time and extra space
def trap(height):

    n = len(bars)
    if n <= 2:
        return 0

    water = 0

    # `left[i]` stores the maximum height of a bar to the left
    # of the current bar
    left = [None] * (n - 1)
    left[0] = -sys.maxsize

    # process bars from left to right
    for i in range(1, n - 1):
        left[i] = max(left[i - 1], height[i - 1])

    # `right` stores the maximum height of a bar to the right
    # of the current bar
    right = -sys.maxsize

    # process bars from right to left
    for i in reversed(range(1, n - 1)):
        right = max(right, height[i + 1])

        # check if it is possible to store water in the current bar
        if min(left[i], right) > height[i]:
            water += min(left[i], right) - height[i]

    return water
