def function(from_,to_,k):
    if k == 0:
        return [from_,to_]
    if from_ + to_ ==3:
        khali_ = 3
    else:
        khali_ = abs(from_ - to_)
    return [function(from_,khali_,k-1),function(from_,to_,0),function(khali_,to_,k-1)]
def towerOfHanoi(n):
    if n == 1:
        return [function(1,2,0)]
    if n == 2:
        return function(1,2,1)
    else:
        return split_list(function(1,2,n-1))
def split_list(list1):
    ans = []
    for num in list1:
        if len(num) != 3:
            ans.extend([num]) 
        elif len(num) == 3:
            ans.extend(split_list(num))
    return ans
if __name__ == '__main__':

    n = int(input('Enter the number of Disks Between 1 to 12\n'))
    print(f'The Disks will be solved in {2**n-1} steps')
    x = input('Do you want to Print the steps involved? \n Say yes or no\n')
    if x.lower() == 'yes':
        print(towerOfHanoi(n))
    print('Thank You')
