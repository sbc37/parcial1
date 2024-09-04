# Definición de patrones y tokens  
BEGIN {  
    suma = "\\+"  
    incremento = "\\+\\+"  
    entero = "^[0-9]+"  
    real = "^[0-9]+\\.[0-9]+"  
}  

{
    # Ignorar espacios en blanco
    gsub(/^[ \t]+/, "", $0)
    
    while (length($0) > 0) {
        # Ignorar espacios en blanco
        gsub(/^[ \t]+/, "", $0)
        
        # Procesar cada patrón en el orden correcto
        if (match($0, incremento)) {
            print "INCR"
            $0 = substr($0, RSTART + RLENGTH)
        } else if (match($0, suma)) {
            print "SUMA"
            $0 = substr($0, RSTART + RLENGTH)
        } else if (match($0, real)) {
            print "REAL"
            $0 = substr($0, RSTART + RLENGTH)
        } else if (match($0, entero)) {
            print "ENTERO"
            $0 = substr($0, RSTART + RLENGTH)
        } else {
            # Si no coincide con ningún patrón, eliminar el primer carácter (para evitar un bucle infinito)
            $0 = substr($0, 1)
        }
    }
}



