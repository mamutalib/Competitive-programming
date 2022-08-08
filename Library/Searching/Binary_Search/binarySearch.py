def binarySearch(arr, l, r, item):
    while l<=r:
        mid = l+(r-1) //2
        if arr[mid] == item:
            return mid
        elif arr[mid] < item:
            l = mid+1

        else:
            r = mid-1
    return -1

# Driver Code
arr = [2, 3, 4, 10, 40]
x = 10

# Function call
result = binarySearch(arr, 0, len(arr) - 1, x)

if result != -1:
    print("Element is present at index % d" % result)
else:
    print("Element is not present in array")