# You are given integers N and M.

# Consider a sequence a of length N consisting of positive integers such that a1+a2+....+an = M. Find the maximum possible value of the greatest common divisor of a1, a2,...,an.

# Constraints
# All values in input are integers.
# Output
# Print the maximum possible value of the greatest common divisor of a sequence a1, a2,...,an that satisfies the condition.

n, m = map(int, input().split())
ans = 0
for i in range(1, m+1):
    if i*i > m: break
    if m%i == 0:
        if m//i >= n: ans = max(ans, i)
        if i >= n: ans = max(ans, m//i)
print(ans)
