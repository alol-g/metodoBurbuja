#include<stdio.h>
#include<windows.h>
#define MAX 28
#define AMARILLO_T "\x1b[33m"
#define CYAN_T     "\x1b[36m"
#define MAGENTA_T  "\x1b[35m"
#define VERDE_T        "\x1b[32m"
#define RESET_COLOR    "\x1b[0m"
void margen(int c, int f);
int burbuja(int A[],int valor);
void cuadro(int a, int b,int c );
 void gotoxy(int x,int y);
main()
{
	srand(time(NULL)); //semilla
	//declaracion de variables 
	int valor,vector[MAX]={0},x=5,y=14,a=0,b=1,i,j;
	margen(a, b);
	gotoxy(40,3);
	printf(AMARILLO_T"M%ctodo de ordenamiento de la burbuja "RESET_COLOR,130);
	gotoxy(26,7);
	printf("Cantidad de valores a ordenar: ");
	scanf("%d",&valor);
	cuadro( x, y, valor);
	
	//llenado del vector 
	  for ( i = 0; i < valor; ++i) {
        int numeroAleatorio;
        int repetido;
        do {
            numeroAleatorio = 10 + rand() % 90;
            repetido = 0;
            // Verificar si el número generado ya existe en el vector
            for ( j = 0; j < i; ++j) {
                if (vector[j] == numeroAleatorio) {
                    repetido = 1;
                    break;
                }
            }
        } while (repetido);

        vector[i] = numeroAleatorio;
    }
    

   //salida para imprimir los numeros del vector aleatorio 
    for ( i = 0; i < valor; i++) {
    	gotoxy(x+(i*4)+1,y+1);
        printf("%d ", vector[i]);
    }
    
    //conversion
	    burbuja(vector, valor);

	getch();
	
}

int burbuja(int A[],int valor)
{
     int x=5,y=10;
	 int i, j, aux;
    for (i = 0; i < valor; i++) {
    		
        for (j = 0; j < (valor-1) - i; j++) { 
          
           //lo que va comparando
           
           gotoxy(x, y + 14); 
           printf("Comparaci%cn",162);
           gotoxy(x + (j * 4) + 1, y + 15);
    	   printf(AMARILLO_T"%d"RESET_COLOR ,A[j]);
           gotoxy(x + ((j + 1) * 4) + 1, y + 15);
    	   printf(AMARILLO_T"%d"RESET_COLOR ,A[j+1]);
    	   gotoxy(x + (j * 4) + 1, y + 12);
    	   printf(CYAN_T"*"RESET_COLOR );
           gotoxy(x + ((j + 1) * 4) + 1, y + 12);
    	   printf(CYAN_T"*"RESET_COLOR );
           sleep(2);
           //borra asteriscos
           gotoxy(x + (j * 4) + 1, y + 12);
    	   printf(" " );
           gotoxy(x + ((j + 1) * 4) + 1, y + 12);
    	   printf(" " );
           //borra los numeros
           gotoxy(x + (j * 4) + 1, y + 15);
    	   printf("   ");
           gotoxy(x + ((j + 1) * 4) + 1, y + 15);
    	   printf("   ");
            
    	   //proceso de intercambio
            if (A[j] > A[j + 1]) {
        	//ir subiendo e ir bajando los numeros
            	//j 
          // y en primera posicion
            gotoxy(x + (j * 4) + 1, 15-1);
    	    printf("%d" ,A[j]); 
    	    gotoxy(10 + (j * 4) + 1, 17-1);
    	    printf("%d" ,A[j+1]); 
    	    sleep(0.01);
    	    gotoxy(x + (j * 4) + 1, 15-1);
    	    printf("  "); 
    	    gotoxy(10 + (j * 4) + 1, 17-1);
    	    printf("  "); 
    	    gotoxy(x + (j * 4) + 1, 15-2);
    	    printf("%d" ,A[j]); 
    	    gotoxy(10 + (j * 4) + 1, 17);
    	    printf("%d" ,A[j+1]);
    	    sleep(0.01);
    	     gotoxy(x + (j * 4) + 1, 15-2);
    	    printf("  " ); 
    	   gotoxy(10 + (j * 4) + 1, 17);
    	    printf("  ");
    	    sleep(0.01);
    	    gotoxy(x + (j * 4) + 1, 15-3);
    	    printf("%d" ,A[j]); 
    	    
    	     gotoxy(10 + (j * 4) + 1, 18);
    	    printf("%d" ,A[j+1]); 
    	
    	     sleep(0.01);
    	      gotoxy(x + (j * 4) + 1, 15-3);
    	    printf("  "); 
    	     gotoxy(10 + (j * 4) + 1, 18);
    	    printf("  " ); 
    	     
    	    //X
    	    gotoxy(7 + (j * 4) + 1, 12);
    	    printf("%d" ,A[j]);
    	     gotoxy(8 + (j * 4) + 1, 19);
    	    printf("%d" ,A[j+1]);
			 
			
    	    sleep(0.01);
    	     gotoxy(7 + (j * 4) + 1, 12);
    	    printf("  ");
    	     gotoxy(8 + (j * 4) + 1, 19);
    	    printf("  " );
    	    
    	    
			//y 
			gotoxy(10 + (j * 4) + 1, 15-3);
    	    printf("%d" ,A[j]); 
    	    gotoxy(x + (j * 4) + 1, 19);
    	    printf("%d" ,A[j+1]);
    	   
    	    sleep(0.01);
    	    gotoxy(10 + (j * 4) + 1, 15-3);
    	    printf("  ");
    	    gotoxy(x + (j * 4) + 1, 19);
    	    printf("  ");
    	    
    	    gotoxy(10 + (j * 4) + 1, 15-2);
    	    printf("%d" ,A[j]); 
    	    gotoxy(x + (j * 4) + 1, 18);
    	    printf("%d" ,A[j+1]); 
    	    
    	  sleep(0.01);
    	      gotoxy(10 + (j * 4) + 1, 15-2);
    	    printf("  "); 
    	    gotoxy(x + (j * 4) + 1, 18);
    	    printf("   "); 
    	    
    	     gotoxy(10 + (j * 4) + 1, 15-1);
    	    printf("%d" ,A[j]);
			gotoxy(x + (j * 4) + 1, 18-1);
    	    printf("%d" ,A[j+1]); 
			 
    	   sleep(0.01);
    	    
    	     gotoxy(10 + (j * 4) + 1, 15-1);
    	    printf("  "); 
    	    gotoxy(x + (j * 4) + 1, 18-1);
    	    printf("   ");
    	    
    	    gotoxy(10 + (j * 4) + 1, 15-1);
    	    printf("%d" ,A[j]); 
    	    	gotoxy(x + (j * 4) + 1, 17-1);
    	    printf("%d" ,A[j+1]);
    	    sleep(0.01);
    	   gotoxy(10 + (j * 4) + 1, 15-1);
    	    printf("  "); 
    	      gotoxy(x + (j * 4) + 1, 17-1);
    	    printf("  " );
    	    
    	    //Restaurar la tabla por arriba
    	    gotoxy(10 + (j * 4) + 1, 15-1);
    	    printf("%c%c",196,196); 
    	    gotoxy(x + (j * 4) + 1, 15-1);
    	    printf("%c%c",196,196); 
            
    	    //Restaurar la tabla por abajo
    	    gotoxy(10 + (j * 4) + 1, 17-1);
    	    printf("%c%c",196,196); 
    	    gotoxy(x + (j * 4) + 1, 17-1);
    	    printf("%c%c",196,196); 
    	    
                //intercambio
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
                 
                //Van reemplazando los números
                gotoxy(9+(j*4)+1,15);
                printf(VERDE_T"%d"RESET_COLOR, A[j + 1]);
                gotoxy(5+(j*4)+1,15);
                printf(AMARILLO_T"%d"RESET_COLOR,A[j]);
                
            }
        }
    }
    
	return A[i];
		
}







//margen

	void margen(int c,int f)
{
	int i,a=20;
		gotoxy(c,f);
	printf(AMARILLO_T"%c",218);
	//cuadro pqueño
		gotoxy(a+18,f+1);
	printf("%c",218);
		gotoxy(a+18,f+2);
	printf("%c",179);
		gotoxy(a+57,f+2);
	printf("%c",179);
		for(i=0;i<38;i++)
	{
		//-
	gotoxy((a+18)+(i*1)+1,2);
	printf("%c",196);
					//-
	gotoxy((a+18)+(i*1)+1,4);
		printf("%c",196);
	}
	
gotoxy((a+18)+(i*1)+1,2);
printf("%c",191);
gotoxy((a+18)+(i*1)+1,4);
printf("%c",217);
gotoxy(a+18,f+3);
printf("%c",192);
	//cuadro grande 
	for(i=0;i<117;i++)
	{
		//-
	gotoxy(c+(i*1)+1,f);
	printf("%c",196);

			
					//-
	gotoxy(c+(i*1)+1,28);
		printf("%c",196);
	}
	
	gotoxy(c+(i*1)+1,f);
	printf("%c",191);
		
		for(i=0;i<26;i++)
	{
		//l
	gotoxy(c,f+(i*1)+1);
	printf("%c",179);
	gotoxy(118,f+(i*1)+1);
	printf("%c",179);
	
	}
    gotoxy(c,f+(i*1)+1);
	printf("%c",192);
	gotoxy(118,f+(i*1)+1);
	printf("%c"RESET_COLOR,217);
	
}



//recuadros
void cuadro(int a, int b,int c)
{
	int i;
	gotoxy(a,b);
	printf(MAGENTA_T"%c",218);
	gotoxy(a,b+1);
	printf("%c",179);
	gotoxy(a,b+2);
	printf("%c",192);
	
	for(i=0;i<c-1;i++)
	{
gotoxy(a+(i*4)+1,b);
		printf("%c%c%c%c",196,196,196,194);
	gotoxy(a+(i*4)+4,b+1);
	printf("%c",179);
		gotoxy(a+(i*4)+1,b+2);
		printf("%c%c%c%c",196,196,196,193);
	}
	 gotoxy(a+(i*4)+1,b);
	printf("%c%c%c%c",196,196,196,191);
	gotoxy(a+(i*4)+1,b+1);
    	printf("   %c",179);
	gotoxy(a+(i*4)+1,b+2);
	printf("%c%c%c%c"RESET_COLOR,196,196,196,217);
}

//windows
 void gotoxy(int x,int y)
 {  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
