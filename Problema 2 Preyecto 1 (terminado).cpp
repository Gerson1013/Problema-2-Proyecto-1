#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int amountOfnumbers;
float numbers[amountOfnumbers];
float addition=0;
float average=0;
float largestNumber;
float smallestNumber;
float range=0;
float variance=0;
float median=0;
float aux;




cout<<"Digite la cantidad de numeros que desea ingresar al sistema (la cantidad debe ser mayor a 20):";cin>>amountOfnumbers;

while(amountOfnumbers<20){
    cout<<"Recuerde que la cantidad es mayor debe ser mayor o igual a 20:";cin>>amountOfnumbers;
    
}

for(int i=0;i<amountOfnumbers;i++){
    
    cout<<"Ingrese el numero["<<i+1<<"]:";cin>>numbers[i];
    addition=numbers[i]+addition;

    if ( i == 0 ) {
            largestNumber = numbers[i];
            smallestNumber = numbers[i];
        }
        else {
            
            if (numbers[i] > largestNumber) {
                largestNumber = numbers[i];
            }
            
            if (numbers[i] < smallestNumber) {
                smallestNumber = numbers[i];
            }
            
        }
        
        
}

average=addition/amountOfnumbers;


for(int i=0;i<amountOfnumbers;i++){
    variance=((pow((numbers[i]-average),2))/amountOfnumbers)+variance;
}



range=(largestNumber-smallestNumber);
//Ordenamiento metodo de la burbuja 
for(int i=0;i<amountOfnumbers;i++){
    for(int j=0; j<amountOfnumbers-1;j++ ){
        if(numbers[j]>numbers[j+1]){
            aux=numbers[j];
            numbers[j]=numbers[j+1];
            numbers[j+1]=aux;
        }
    }
}
cout<<"Datos ordenados de manera ascendente:"<<endl;

for(int i=0;i<amountOfnumbers;i++){
    cout<<numbers[i]<<" "<<"["<<i+1<<"]"<<endl;
}


if(amountOfnumbers%2==0){
    median=(numbers[amountOfnumbers/2]+numbers[(amountOfnumbers/2)-1])/2;
}

if(amountOfnumbers%2==1){
    median=numbers[(amountOfnumbers/2)-1/5];
}

cout<<"El promedio de los numeros ingresados es:"<<average<<endl;
cout<<"El valor de la mediana es:"<<median<<endl;
cout<<"El numero mayor es:"<<largestNumber<<endl;
cout<<"El numero menor es:"<<smallestNumber<<endl;
cout<<"El rango es:"<<range<<endl;
cout<<"La varianza es:"<<variance<<endl;
cout<<"La desviacion estandar es:"<<sqrt(variance);
















    return 0;
}
