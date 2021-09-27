//Suzzanne Acevedo Morales
//carnet:0909-21-10857

#include <iostream>
using namespace std;

int main ()

{
    float costoservicio, pr, pv, costokg, distancia, prm, pvm, costodis;
    float preciop, totald;
    int sucursal, paq, peso, largo, ancho, alto;
    string tipop;
        
    costodis = 0.13;
    costokg  = 2.5;
    
    system ("cls");
    	cout << "//-------P&P PAQUETERIA XPRESS------// " << endl;
	   	cout << "Tus paquetes hasta la puerta de tu casa" << endl;
	   	cout << " " << endl;
	   	cout<<"===================================="<<endl;
	   	cout << "Sucursales disponibles para Envios" << endl;
	    cout << "\t1.- Guatemala" << endl;
	    cout << "\t2.- Izabal" << endl;
	    cout << "\t3.- Peten" << endl;
	    cout << "\t4.- Chiquimula" << endl;
	    cout << "\t5.- Retalhuleu" << endl;
	    cout<<"===================================="<<endl;
	    cout << " " << endl;
	    cout<<"Ingrese la Opcion deseada: "<<endl;
	    cin >> sucursal;
	    cout << " " << endl;
    
    if (sucursal==1){
    	distancia = 10;
    	totald = distancia * costodis; 
	}else if(sucursal==2){
		distancia = 300;
		totald = distancia * costodis;
	}else if(sucursal==3){
		distancia = 460;
		totald = distancia * costodis;
	}else if(sucursal==4){
		distancia = 178;
		totald = distancia * costodis;
	}else if(sucursal==5){
		distancia = 200;
		totald = distancia * costodis;
	}
    
    system ("cls");
    cout << "Tipo de mercaderia a enviar: " << endl;
    cout << " " << endl;
	cout<<"===================================="<<endl;
    cout << "\t1.- Documentos" << endl;
    cout << "\t2.- Paqueteria" << endl;
    cout << "\t3.- Mobiliario" << endl;
    cout << "\t4.- Repuestos" << endl;
    cout << "\t5.- Articulos Electricos" << endl;
	cout<<"===================================="<<endl;
	cout << " " << endl;
	cout<<"Ingrese la Opcion deseada: "<<endl;
    cin >> paq;
    cout << " " << endl;
    
    if (paq==1){
    	
		preciop = 40;
    	tipop = "Documentos";
    	costoservicio = 40;
    	
    	   	
    }else if (paq==2){
    	
    	tipop = "Paqueteria";
    	
    	cout << "Conoces el peso de tu producto? " << endl;
    	cout << " " << endl;
    	cout << "1. SI" << endl;
    	cout << "2. NO" << endl;
    	cin >> peso;
    	cout << " " << endl;
    
    	if (peso==1){
	  	cout << "Introduce el peso de tu producto: " << endl;
    	cin >> pr;
    	
		prm = pr * costokg + totald;
    	costoservicio = prm;   
		 	
    	}else {
		cout << "Se calculara el peso volumetrico basado en las medidas en centimetros de tu producto" << endl;
		cout << " " << endl;
		cout << "Cuanto mide de largo tu producto?: " << endl;
		cin >> largo;
		cout << "Cuanto mide de ancho tu producto?: " << endl;
		cin >> ancho;
		cout << "Cuanto mide de alto tu producto?: " << endl;
		cin >> alto;
		pv = largo * ancho * alto / 2272;
		pvm = pv * costokg + totald;
		costoservicio = pvm;
	}
	
	}else if (paq==3){
		
		tipop = "Mobiliario";
		
		cout << "Conoces el peso de tu producto? " << endl;
    	cout << " " << endl;
    	cout << "1. SI" << endl;
   		cout << "2. NO" << endl;
    	cin >> peso;
    	cout << " " << endl;
    
    	if (peso==1){
	  	cout << "Introduce el peso de tu producto: " << endl;
    	cin >> pr;
    	prm = pr * costokg + totald;
    	costoservicio = prm;    
			
    	}else {
		cout << "Se calculara el peso volumetrico basado en las medidas en centimetros de tu producto" << endl;
		cout << " " << endl;
		cout << "Cuanto mide de largo tu producto?: " << endl;
		cin >> largo;
		cout << "Cuanto mide de ancho tu producto?: " << endl;
		cin >> ancho;
		cout << "Cuanto mide de alto tu producto?: " << endl;
		cin >> alto;
		pv = largo * ancho * alto / 2272;
		pvm = pv * costokg + totald;
		costoservicio = pvm;
	}
	
	}else if (paq==4){
		
		tipop = "Repuestos";
		
		cout << "Conoces el peso de tu producto? " << endl;
    	cout << " " << endl;
    	cout << "1. SI" << endl;
   		cout << "2. NO" << endl;
    	cin >> peso;
    	cout << " " << endl;
    
    	if (peso==1){
	  	cout << "Introduce el peso de tu producto: " << endl;
    	cin >> pr;
    	prm = pr * costokg + totald;
    	costoservicio = prm;   
		
   	 	}else {
		cout << "Se calculara el peso volumetrico basado en las medidas en centimetros de tu producto" << endl;
		cout << " " << endl;
		cout << "Cuanto mide de largo tu producto?: " << endl;
		cin >> largo;
		cout << "Cuanto mide de ancho tu producto?: " << endl;
		cin >> ancho;
		cout << "Cuanto mide de alto tu producto?: " << endl;
		cin >> alto;
		pv = largo * ancho * alto / 2272;
		pvm = pv * costokg + totald;
		costoservicio = pvm;
		
	}	
	}else if (paq==5){
		
		tipop = "Articulos Electricos";
		
		cout << "Conoces el peso de tu producto? " << endl;
    	cout << " " << endl;
    	cout << "1. SI" << endl;
   		cout << "2. NO" << endl;
    	cin >> peso;
    	cout << " " << endl;
    
    	if (peso==1){
	  	cout << "Introduce el peso de tu producto: " << endl;
    	cin >> pr;
    	prm = pr * costokg + totald;
    	costoservicio = prm;  
		  	
    	}else {
		cout << "Se calculara el peso volumetrico basado en las medidas en centimetros de tu producto" << endl;
		cout << " " << endl;
		cout << "Cuanto mide de largo tu producto?: " << endl;
		cin >> largo;
		cout << "Cuanto mide de ancho tu producto?: " << endl;
		cin >> ancho;
		cout << "Cuanto mide de alto tu producto?: " << endl;
		cin >> alto;
		pv = largo * ancho * alto / 2272;
		pvm = pv * costokg + totald;
		costoservicio = pvm;
		}
	}
    	
    cout << " " << endl;
    system ("cls");
    cout << " " << endl;
    cout << "-----------------------------------------------" << endl;
    cout << " " << endl;
	cout << "El monto total a pagar por el servicio es: Q." << costoservicio << endl;
	cout << "Tu tipo de mercaderia es: " << tipop << endl;
	cout << "La distancia total sera de: " << distancia << " kilometros" << endl;
	cout << " " << endl;
	cout << "-----------------------------------------------" << endl;   
	
	return 0;
}