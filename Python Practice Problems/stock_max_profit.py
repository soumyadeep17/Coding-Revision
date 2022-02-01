# Given a array of numbers representing the stock prices of a company in chronological order, 
# write a function that calculates the maximum profit you could have made from buying and selling that stock once. 
# You must buy before you can sell it.
# For example, given [9, 11, 8, 5, 7, 10], you should return 5, 
# since you could buy the stock at 5 dollars and sell it at 10 dollars.

#Method 1 O(n^2)
arr = [11,222,2,45,79]
max_profit = 0
buying_price = 0
selling_price = 0
for i in range(len(arr)):
    for j in range(i+1,len(arr)):
        if max_profit < arr[j] - arr[i]:
            max_profit = arr[j] - arr[i]
            buying_price = arr[i]
            selling_price = arr[j]
        else:
            continue

#Method 2 O(n)
def maxDiff(arr, arr_size):
    max_diff = arr[1] - arr[0]
    min_element = arr[0]
     
    for i in range( 1, arr_size ):
        if (arr[i] - min_element > max_diff):
            max_diff = arr[i] - min_element
     
        if (arr[i] < min_element):
            min_element = arr[i]
    return max_diff

print(buying_price,selling_price,max_profit)

