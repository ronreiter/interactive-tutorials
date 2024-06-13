#Fibonacci_series

arr = [0, 1]

def printFiboNseries(num)
   if num == 0 || num ==1
      return 1
   end
   while arr.length <= num
      arr << arr[-1] + [-2] 
   end
  return arr
end

puts printFiboNseries(5)
