class Clases
  #Constructor
  def initialize(*args)
    if args.size < 2
      @x = 0
      @y = 0

    else
      @x = args[0]
      @y = args[1]
    end
  end




  #Metodo 'setter'
  def x=(x)
    @x = x
  end

  #Metodo 'getter'
  def x
    @x
  end

  #Metodo 'setter'
  def y=(y)
    @y = y
  end

  #Metodo 'getter'
  def y
    @y
  end

end
