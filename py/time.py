class Time:
	def __init__(self, hour, minute, seconds):
		self.hour = hour
		self.minute = minute
		self.seconds = seconds
		
	def __add__(self,other):
		s = self.seconds + other.seconds
		m = self.minute + other.minute
		h = self.hour + other.hour
		
		if s >= 60:
			s = s % 60
			m += 1
		if m >= 60:
			m = m % 60
			h += 1
		if h >= 24:
			h = h % 24
			
		return Time(h, m, s)
		
t1 = Time(1,55,58)
t2 = Time(11,10,30)

t = t1 + t2

print("Time is: ",t.hour,t.minute,t.seconds)
