class Rectangle:
	def __init__(self, length, breadth):
		self.length = length
		self.breadth = breadth
		
	def area(self):
		return self.length * self.breadth
		
	def __lt__(self, other):
		return self.area() < other.area()
	
r1 = Rectangle(10,5)
r2 = Rectangle(8,3)

if r1 < r2:
	print("Area of r1 is less than r2")
else:
	print("Area of r2 is less than r1")
	
