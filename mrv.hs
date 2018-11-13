data MRUV = Velocidad Float | Distancia Float | Aceleracion Float
--tiempo::MRUV -> MRUV -> MRUV ->Float
operador = \(Velocidad v) (Distancia d) (Aceleracion a) -> sqrt(2*d/a)
main=do
	v<- readLn
	d<- readLn
	a<- readLn
	let asd = operador (Velocidad v) (Distancia d) (Aceleracion a)
	print asd 
