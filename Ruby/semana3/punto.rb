class punto
  #Constructor
  def initialize(*args)
    if args  < 2
      @x = 0
      @y = 0
    else
      @x = args[0]
      @y = args[1]
    end
  end

  #Metodos setters
  def x=(x)
    @x = x
  end

  def y=(y)
    @y = y
  end

  #Metodos getter
  def x
    @x
  end

  def y
    @y
  end
  def to_s
    "["+x.to_s","+y.to_s+"]"
  end

end
