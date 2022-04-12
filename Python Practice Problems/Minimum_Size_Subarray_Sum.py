def lol(target,nums):
        x = nums[0]
        hold = [nums[0]]
        if nums[0]>= target:
            return 1
        for i in range(1, len(nums)):
            x = x + nums[i]
            hold.append(nums[i])
            print(x)
            if x>=target:
                break
            else:
                continue
        print(x)
        if x<target:
            return 10**5
        return len(hold)
def minSubArrayLen(target,nums):
        for i in range(len(nums)):
            if nums[i]>= target:
                return 1;
        if sum(nums)<target:
            return 0;
        if sum(nums) == target:
            return len(nums)
        a = [lol(target, nums[i:]) for i in range(len(nums))]
        print(a)
        return min(a)
print(sorted([[1,2,3],[3,1,2],[2,3,1],[2,1,3],[1,3,2],[3,2,1]]))