N = int(input())
while N>0:
  balls = (map(int,input().split()))
  x=list(map(int,input().split()))
  m=max(x)
  l=min(x)
  
  increment = m-l
  print(increment)