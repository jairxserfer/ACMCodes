load 'clases.rb'

p1 = Clases.new
p2 = Clases.new(-2.43, 2.4)

puts 'El valor de x en p1 es: '+ p1.x.to_s
puts 'El valor de y en p1 es: '+p1.y.to_s
puts 'El valor de x en p2 es: '+ p2.x.to_s
puts 'El valor de y en p2 es: '+p2.y.to_s
