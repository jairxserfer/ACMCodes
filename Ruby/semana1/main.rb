load 'Operaciones.rb'

var1 = 5, var2 = 3
m = Operaciones.new
k = m.suma(5,3)
puts 'La suma es '+k.to_s
k = m.resta(5,3)
puts 'La resta es '+ k.to_s
k = m.multiplicacion(5,3)
puts 'La multiplicacion es '+k.to_s
k = m.division(5,3)
puts 'La division es '+k.to_s
