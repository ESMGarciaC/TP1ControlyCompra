#include<stdio.h>
#include<string.h>



main(){
	char Pregunta[3];
	int mes,Temporada;
	int i,tiempoCepillo,acumulador = 0;
	//agregamos las variables de los productos que tenemos actualmente
	int azucar,arroz,aceite,fideos,pollo,carne,tomate,cebolla,zanahoria;
	int Condimentos[5],verduras,frutas,jabonH,lavandina,desodorante_de_piso;
	int detergente,jabon_liquido,champu,acondicionador,desodorante,perfume;
	int crema_dental,cepillo_de_dientes,cera_de_cabello;
	//--------------------------------------------------------

	//agregamos las variables de los productos que vamos a comparar, osea el stock deseado por eso tenemos q agregarle valores 
	int azucarT = 3 ,arrozT = 10,aceiteT = 2,fideosT = 6,polloT = 5,carneT = 2,tomateT = 3,cebollaT = 3,zanahoriaT = 2;
	int CondimentosT[5] = {1,1,1,1,1},verdurasT = 3,frutasT = 3,jabonHT = 3,lavandinaT = 3,desodorante_de_pisoT = 2;
	int detergenteT = 1,jabon_liquidoT = 3,champuT = 1,acondicionadorT = 1,desodoranteT = 1,perfumeT = 1;
	int crema_dentalT = 1,cepillo_de_dientesT = 1,cera_de_cabelloT = 1;
	//--------------------------------------------------------	
	
	//agregamos las variables que nos mostrara en la maquina
	int azucarM,arrozM,aceiteM,fideosM,polloM,carneM,tomateM,cebollaM,zanahoriaM;
	int CondimentosM[5],verdurasM,frutasM,jabonHM,lavandinaM,desodorante_de_pisoM;
	int detergenteM,jabon_liquidoM,champuM,acondicionadorM,desodoranteM,perfumeM;
	int crema_dentalM,cepillo_de_dientesM,cera_de_cabelloM;
	//--------------------------------------------------------
	
	//agregamos las variables de los productos con el precio en pesos y le agregamos el valor por unidades
	int azucarP = 500,arrozP = 400,aceiteP = 500,fideosP = 150,polloP = 1200,carneP = 1800,tomateP = 1000,cebollaP = 400,zanahoriaP = 300;
	int CondimentosP[5] = {200,300,400,200,150},verdurasP = 500,frutasP = 500,jabonHP = 300,lavandinaP = 180,desodorante_de_pisoP = 150;
	int detergenteP = 300,jabon_liquidoP = 1000,champuP = 1100,acondicionadorP = 1100,desodoranteP = 500,perfumeP = 4000;
	int crema_dentalP = 900,cepillo_de_dientesP = 400,cera_de_cabelloP = 1200;
	//--------------------------------------------------------
	

	
	printf("Desea hacer la compra del mes? Si/No \n");
	fflush(stdin);
	gets(Pregunta);
	
	while (strcmpi(Pregunta ,"si")== 0){
	
		do {
		printf("Porfavor ingrese el mes en que se encuentra ahora , debe ser del 1 al 12 \n");
		fflush(stdin);
		scanf("%d",&mes);
		}while(!(mes <= 12 && mes > 0));
	 
		printf("-----------------------------------------------------------------\n");
		printf("Ingresamos ahora los datos que tenga actualmente en su casa para compararlos con el stock \n");
		printf("ingrese la cantidad de posee de: azucar\n");
		fflush(stdin);
		scanf("%d",&azucar);
		printf("ingrese la cantidad de posee de: arroz \n");
		fflush(stdin);
		scanf("%d",&arroz); 
		printf("ingrese la cantidad de posee de: aceite \n");
		fflush(stdin);
		scanf("%d",&aceite);
		printf("ingrese la cantidad de posee de: fideos \n");
		fflush(stdin);
		scanf("%d",&fideos);
		printf("ingrese la cantidad de posee de: pollo \n");
		fflush(stdin);
		scanf("%d",&pollo);
		printf("ingrese la cantidad de posee de: carne \n");
		fflush(stdin);
		scanf("%d",&carne);
		printf("ingrese la cantidad de posee de: tomate\n");
		fflush(stdin);
		scanf("%d",&tomate);
		printf("ingrese la cantidad de posee de: cebolla \n");
		fflush(stdin);
		scanf("%d",&cebolla);
		printf("ingrese la cantidad de posee de: zanahoria \n");
		fflush(stdin);
		scanf("%d",&zanahoria);
		printf("ingrese la cantidad de posee de:condimentos \n");
		printf("Como tenemos 5 tipos de condimentos que tenes que ingresar, lo hacemos en este orden( pimienta, ajo en polvo, jemgibre en polvo, oregano y sal) \n");
		for (i=0;i<5;i++){
			printf("ingrese el condimento numero %d \n",i+1);
			fflush(stdin);
			scanf("%d",&Condimentos[i]);
		}
		printf("ingrese la cantidad de posee de: verduras \n");
		fflush(stdin);
		scanf("%d",&verduras);
		printf("ingrese la cantidad de posee de: frutas \n");
		fflush(stdin);
		scanf("%d",&frutas);
		printf("ingrese la cantidad de posee de: jabonH\n");
		fflush(stdin);
		scanf("%d",&jabonH);
		printf("ingrese la cantidad de posee de: Lavandina \n");
		fflush(stdin);
		scanf("%d",&lavandina);
		printf("ingrese la cantidad de posee de: Desodorante de piso\n");
		fflush(stdin);
		scanf("%d",&desodorante_de_piso);
		printf("ingrese la cantidad de posee de: Detergente \n");
		fflush(stdin);
		scanf("%d",&detergente);
		printf("ingrese la cantidad de posee de: Jabon Liquido \n");
		fflush(stdin);
		scanf("%d",&jabon_liquido);
		printf("ingrese la cantidad de posee de: Champu \n");
		fflush(stdin);
		scanf("%d",&champu);
		printf("ingrese la cantidad de posee de: Acondicionador \n");
		fflush(stdin);
		scanf("%d",&acondicionador);
		printf("ingrese la cantidad de posee de: Desodorante\n");
		fflush(stdin);
		scanf("%d",&desodorante);
		printf("ingrese la cantidad de posee de: Perfume \n");
		fflush(stdin);
		scanf("%d",&perfume);
		printf("ingrese la cantidad de posee de: Crema Dental \n");
		fflush(stdin);
		scanf("%d",&crema_dental);		
		printf("ingrese la cantidad de posee de: Cera del Cabello\n");
		fflush(stdin);
		scanf("%d",&cera_de_cabello);
		
		printf("Ingrese cuanto tiempo tiene el cepillo de dientes actual, en dias \n");
		fflush(stdin);
		scanf("%d",&tiempoCepillo);
		if(tiempoCepillo < 90 ){
			cepillo_de_dientes = 1;
		}else{
			cepillo_de_dientes = 0;
		}
		printf("-----------------------------------------------------------------\n");
		//ahora tenemos q comparar el dato cargado con el que tenemos, podemos poner esto pero muy largo
		
		/*if(azucar == azucarT){
			azucarM = 0;
		}if(azucar < azucarT){
			azucarM = azucarT - azucar;
		}*/
		
		// mejor seria asi
		
		azucarM = azucarT - azucar;
		arrozM = arrozT - arroz;
		aceiteM = aceiteT - aceite;
		fideosM = fideosT - fideos;
		polloM = polloT - pollo;
		carneM = carneT - carne;
		tomateM = tomateT - tomate;
		cebollaM = cebollaT - cebolla;
		zanahoriaM = zanahoriaT - zanahoria;
		verdurasM = verdurasT - verduras;
		frutasM = frutasT - frutas;
		jabonHM = jabonHT - jabonH;
		lavandinaM = lavandinaT - lavandina;
		desodorante_de_pisoM = desodorante_de_pisoT - desodorante_de_piso;
		detergenteM = detergenteT - detergente;
		jabon_liquidoM = jabon_liquidoT - jabon_liquido;
		champuM = champuT - champu;
		acondicionadorM = acondicionadorT - acondicionador;
		desodoranteM = desodoranteT - desodorante;
		perfumeM = perfumeT - perfume;
		cera_de_cabelloM = cera_de_cabelloT - cera_de_cabello;
		crema_dentalM = crema_dentalT - crema_dental;
		cepillo_de_dientesM = cepillo_de_dientesT - cepillo_de_dientes;
		
		//ahora comparamos los condimentos que es un arreglo
		
		for (i=0;i<5;i++){
			CondimentosM[i] = CondimentosT[i] - Condimentos[i];
		}
		
		//una ves comparado todo, mostramos lo que tenemos que comprar 
		
		printf("Nos faltaria la cantidad de : %d de  Azucar  \n",azucarM);
		printf("Nos faltaria la cantidad de : %d de  Arroz \n",arrozM);
		printf("Nos faltaria la cantidad de : %d de  Aceite \n",aceiteM);
		printf("Nos faltaria la cantidad de : %d de  Fideos \n",fideosM);
		printf("Nos faltaria la cantidad de : %d de  Pollo \n",polloM);
		printf("Nos faltaria la cantidad de : %d de  Carne \n",carneM);
		printf("Nos faltaria la cantidad de : %d de  Tomate \n",tomateM);
		printf("Nos faltaria la cantidad de : %d de  Cebolla \n",cebollaM);
		printf("Nos faltaria la cantidad de : %d de  Zanahoria \n",zanahoriaM);
		printf("tenemos 5 tipos de condimentos pimienta, ajo en polvo, jemgibre en polvo, oregano y sal, en ese orden \n");
		for (i=0;i<5;i++){
			printf("Nos faltaria la cantidad de : %d de  Condimento %d \n",CondimentosM[i],i+1);
		}
		
		printf("Nos faltaria la cantidad de : %d de  Verduras \n",verdurasM);
		printf("Nos faltaria la cantidad de : %d de  Frutas \n",frutasM);
		printf("Nos faltaria la cantidad de : %d de  Jabon Hidratante \n",jabonHM);
		printf("Nos faltaria la cantidad de : %d de  Lavandina \n",lavandinaM);
		printf("Nos faltaria la cantidad de : %d de  Desodorante de piso \n",desodorante_de_pisoM);
		printf("Nos faltaria la cantidad de : %d de  Detergente \n",detergenteM);
		printf("Nos faltaria la cantidad de : %d de  Jabon Liquido \n",jabon_liquidoM);
		printf("Nos faltaria la cantidad de : %d de  Champu \n",champuM);
		printf("Nos faltaria la cantidad de : %d de  Acondicionador \n",acondicionadorM);
		printf("Nos faltaria la cantidad de : %d de  Desodorante \n",desodoranteM);
		printf("Nos faltaria la cantidad de : %d de  Perfume \n",perfumeM);
		printf("Nos faltaria la cantidad de : %d de  Crema dental \n",crema_dentalM);
		printf("Nos faltaria la cantidad de : %d de  Cera del cabello \n",cera_de_cabelloM);
		printf("Nos faltaria la cantidad de : %d de  Cepillo de diente \n",cepillo_de_dientesM);
		printf("-----------------------------------------------------------------\n");
		
		//ahora que nos muestre el precio de la compra que vamos a hacer
		
		printf("El precio de %d  Kg de  Azucar es : %d \n",azucarM,azucarM*azucarP);
		acumulador = acumulador + azucarM*azucarP;
		printf("El precio de %d  Kg de  Arroz es : %d  \n",arrozM,arrozM*arrozP);
		acumulador = acumulador + arrozM*arrozP;
		printf("El precio de %d  Litro de  Aceite es : %d \n",aceiteM,aceiteM*aceiteP);
		acumulador = acumulador + aceiteM*aceiteP;
		printf("El precio de %d  Unidades de  Fideos es : %d \n",fideosM,fideosM*fideosP);
		acumulador = acumulador + fideosM*fideosP;
		printf("El precio de %d  Kg de  Pollo es : %d \n",polloM,polloM*polloP);
		acumulador = acumulador + polloM*polloP;
		printf("El precio de %d  Kg de  Carne es : %d \n",carneM,carneM*carneP);
		acumulador = acumulador + carneM*carneP;
		printf("El precio de %d  Kg de  Tomate es : %d \n",tomateM,tomateM*tomateP);
		acumulador = acumulador + tomateM*tomateP;
		printf("El precio de %d  Kg de  Cebolla es : %d \n",cebollaM,cebollaM*cebollaP);
		acumulador = acumulador + cebollaM*cebollaP;
		printf("El precio de %d  Kg de  zanahoria es : %d \n",zanahoriaM,zanahoriaM*zanahoriaP);
		acumulador = acumulador + zanahoriaM*zanahoriaP;
		printf("tenemos 5 tipos de condimentos pimienta, ajo en polvo, jemgibre en polvo, oregano y sal, en ese orden \n");
		for (i=0;i<5;i++){
			printf("El precio de %d  Unidades de  Condimento %d es : %d \n",CondimentosM[i],i+1,CondimentosM[i]*CondimentosP[i]);
			acumulador = acumulador + CondimentosM[i]*CondimentosP[i];
		}
		
		printf("El precio de %d  Kg de  Verduras es : %d \n",verdurasM,verdurasM*verdurasP);
		acumulador = acumulador + verdurasM*verdurasP;
		printf("El precio de %d  Kg de  Frutas es : %d \n",frutasM,frutasM*frutasP);
		acumulador = acumulador + frutasM*frutasP;
		printf("El precio de %d  Unidades de  Jabon Hidratante es : %d \n",jabonHM,jabonHM*jabonHP);
		acumulador = acumulador + jabonHM*jabonHP;
		printf("El precio de %d  Litros de  Lavandina es : %d \n",lavandinaM,lavandinaM*lavandinaP);
		acumulador = acumulador + lavandinaM*lavandinaP;
		printf("El precio de %d  litros de  Desodorante de piso es : %d \n",desodorante_de_pisoM,desodorante_de_pisoM*desodorante_de_pisoP);
		acumulador = acumulador + desodorante_de_pisoM*desodorante_de_pisoP;
		printf("El precio de %d  litro de  Detergente es : %d \n",detergenteM,detergenteM*detergenteP);
		acumulador = acumulador + detergenteM*detergenteP;
		printf("El precio de %d  litros de Jabon Liquido  es : %d \n",jabon_liquidoM,jabon_liquidoM*jabon_liquidoP);
		acumulador = acumulador + jabon_liquidoM*jabon_liquidoP;
		printf("El precio de %d  Unidad de  Champu es : %d \n",champuM,champuM*champuP);
		acumulador = acumulador + champuM*champuP;
		printf("El precio de %d  Unidad de  Acondicionador es : %d \n",acondicionadorM,acondicionadorM*acondicionadorP);
		acumulador = acumulador + acondicionadorM*acondicionadorP;
		printf("El precio de %d  Unidad de  Desodorante es : %d \n",desodoranteM,desodoranteM*desodoranteP);
		acumulador = acumulador + desodoranteM*desodoranteP;
		printf("El precio de %d  Unidad de  Perfume es : %d \n",perfumeM,perfumeM*perfumeP);
		acumulador = acumulador + perfumeM*perfumeP;
		printf("El precio de %d  Unidad de  Cera de cabello es : %d \n",cera_de_cabelloM,cera_de_cabelloM*cera_de_cabelloP);
		acumulador = acumulador + cera_de_cabelloM*cera_de_cabelloP;
		printf("El precio de %d  Unidad de  Crema Dental es : %d \n",crema_dentalM,crema_dentalM*crema_dentalP);
		acumulador = acumulador + crema_dentalM*crema_dentalP;
		printf("El precio de %d  Unidad de  Cepillo de dientes es : %d \n",cepillo_de_dientesM,cepillo_de_dientesM*cepillo_de_dientesP);
		acumulador = acumulador + cepillo_de_dientesM*cepillo_de_dientesP;
		printf("-----------------------------------------------------------------\n");
		
		printf("Y nos saldria un total de : %d  \n",acumulador);
		printf("-----------------------------------------------------------------\n");
	
		//ahora agregamos un switch con sugerencias de compra por temporadas 
		
		if(mes<3 || mes == 12){
			Temporada = 1; //verano
		}else if(mes<6 && mes > 2){
			Temporada = 2; //otono
		}else if(mes<9 && mes > 5){
			Temporada = 3; //invierno
		}else if(mes<12 && mes > 8){
			Temporada = 4; //primavera
		}
		
		switch(Temporada){
			case 1:
				printf("Como es la tempodara de verano te recomiendo comprar de verdura choclo y zapallo y de Fruta frutilla ya que estaran mas ecomomicos \n");
			case 2:
				printf("Como es la tempodara de otono te recomiendo comprar de verdura apio y batata y de Fruta melon ya que estaran mas ecomomicos \n");
			case 3:
				printf("Como es la tempodara de invierno te recomiendo comprar de verdura espinaca y nabo y de Fruta durazno ya que estaran mas ecomomicos \n");
			case 4:
				printf("Como es la tempodara de primavera te recomiendo comprar de verdura remolacha y lechuga y de Fruta anana ya que estaran mas ecomomicos \n");
				
		}	
		printf("-----------------------------------------------------------------\n");
		printf("Desea hacer otra compra con otros datos? Si/No \n");
		fflush(stdin);
		gets(Pregunta);	
		
	}
	
}
