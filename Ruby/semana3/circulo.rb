load 'punto.rb'
class circulo < punto
  def initialize(*args)
    if args < 2
      super
      @r = 1
    else
      super(x,y)
      @r = r
    end
  end

  def to_s
    "\n\tcirculo\n\t\tcentro:"+super.to_s+ "\n\t\t radio: "+ r.to_s + "\n\tarea"+area
  end

  def area
    
  end

end
