#include <iostream>
using namespace std;
int main(){
    int EDAD,TALLA,OPCION,OPCION2,FALTANTE, RESTANTE;
    int DEPORTIVO = 64, FORMAL= 96, PREMIUM = 200;
    int CASUAL = 70, ELEGANTE = 120, PREMIUM1=250;
    int CARTERA = 200;

    cout <<"Cual es tu edad: ";
    cin >> EDAD;
    if( EDAD >= 0 && EDAD <= 12){
        cout <<"Tu talla recomendada es 34"<<endl;
    }else if(EDAD >=13 && EDAD <=17){
        cout <<"Tu talla recomendada es 38"<<endl;
    }else if (EDAD >= 18 && EDAD <=64){
        cout <<"Tu talla recomendada es 40"<<endl;
    }else{
        cout <<"Tu talla recomendada es 42"<<endl;
    }

    cout <<"---Elige una opcion---" <<endl;
    cout <<"1.Para hombre" <<endl;
    cout <<"2.Para mujer" <<endl;
    cout <<"3.Mostrar todo" <<endl;
    cout <<"Opcion: ";
    cout <<" "<<endl;
    cin >>OPCION;

    switch(OPCION)
    {
        case 1:
        cout <<"---------------------------------------------------------------------"<<endl;
        cout <<"1.Zapato Deportivo: $80 (Descuento del 20%, precio con descuento $64)"<<endl;
        cout <<"2.Zapato Formal: $120 (Descuento del 20%, precio con descuento $96)"<<endl;
        cout <<"3.Zapato Premium: $250 (Descuento del 20$, precio con descuento $200)"<<endl;
        cout <<"Seleccione una opcion: ";
        cout <<" "<<endl;
        cin >>OPCION2;

            switch(OPCION2)
            {
            case 1:
            cout <<"Saldo disponible: " <<CARTERA <<endl;
            cout <<"Producto seleccionado - Zapato deportivo: " <<DEPORTIVO <<endl;
            RESTANTE = CARTERA - DEPORTIVO;
            FALTANTE = DEPORTIVO - CARTERA;
            if(CARTERA < DEPORTIVO){
                cout <<"Faltante: " <<FALTANTE <<endl;
                cout <<"Fondos insuficientes para completar la compra"<<endl;
            }else{
                cout <<"Restante: " <<RESTANTE <<endl;
                cout <<"Gracias por su compra. !Que disfrute sus nuevos zapatos!"<<endl;
            }
            break;
            
            case 2:
            cout <<"Saldo disponible: " <<CARTERA<<endl;
            cout <<"Producto seleccionado - Zapato formal: " <<FORMAL<<endl;
            RESTANTE = CARTERA - FORMAL;
            FALTANTE = FORMAL - CARTERA;
            if(CARTERA < FORMAL){
                cout <<"Faltante: " <<FALTANTE <<endl;
                cout <<"Fondos insuficientes para completar la compra"<<endl;
            }else{
                cout <<"Restante: " <<RESTANTE <<endl;
                cout <<"Gracias por su compra. !Que disfrute sus nuevos zapatos!"<<endl;
            }
            break;

            case 3:
            cout <<"Saldo disponible: " <<CARTERA<<endl;
            cout <<"Producto seleccionado - Zapato premium: " <<PREMIUM<<endl;
            RESTANTE = CARTERA - PREMIUM;
            FALTANTE = PREMIUM - CARTERA;
            if(CARTERA < PREMIUM){
                cout <<"Faltante: " <<FALTANTE <<endl;
                cout <<"Fondos insuficientes para completar la compra"<<endl;
            }else{
                cout <<"Restante: " <<RESTANTE <<endl;
                cout <<"Gracias por su compra. !Que disfrute sus nuevos zapatos!"<<endl;
            }
            break;
            }
        break;

        case 2:
        cout <<"-----------------------------------------------------------------"<<endl;
        cout <<"1.Zapato Deportivo: $80 (Descuento del 15%, precio con descuento )"<<endl;
        cout <<"2.Zapato Elegante: $100 (Descuento del 15%, precio con descuento)"<<endl;
        cout <<"3.Zapato Premium: $250 (Descuento del 15$, precio con descuento) "<<endl;
        cout <<"Opciones: ";
        cout <<" "<<endl;
        cin >>OPCION2;
        switch(OPCION2)
            {
            case 1:
            cout <<"Saldo disponible: " <<CARTERA <<endl;
            cout <<"Producto seleccionado - Zapato casual: " <<CASUAL <<endl;
            RESTANTE = CARTERA - CASUAL;
            FALTANTE = CASUAL - CARTERA;
            if(CARTERA < CASUAL){
                cout <<"Faltante: " <<FALTANTE <<endl;
                cout <<"Fondos insuficientes para completar la compra"<<endl;
            }else{
                cout <<"Restante: " <<RESTANTE <<endl;
                cout <<"Gracias por su compra. !Que disfrute sus nuevos zapatos!"<<endl;
            }
            break;

            case 2:
            cout <<"Saldo disponible: " <<CARTERA<<endl;
            cout <<"Producto seleccionado - Zapato elegante: " <<ELEGANTE<<endl;
            RESTANTE = CARTERA - ELEGANTE;
            FALTANTE = ELEGANTE - CARTERA;
            if(CARTERA < ELEGANTE){
                cout <<"Faltante: " <<FALTANTE <<endl;
                cout <<"Fondos insuficientes para completar la compra"<<endl;
            }else{
                cout <<"Restante: " <<RESTANTE <<endl;
                cout <<"Gracias por su compra. !Que disfrute sus nuevos zapatos!"<<endl;
            }
            break;

            case 3:
            cout <<"Saldo disponible: " <<CARTERA<<endl;
            cout <<"Producto seleccionado - Zapato premium: " <<PREMIUM1<<endl;
            RESTANTE = CARTERA - PREMIUM1;
            FALTANTE = PREMIUM1 - CARTERA;
            if(CARTERA < PREMIUM1){
                cout <<"Faltante: " <<FALTANTE <<endl;
                cout <<"Fondos insuficientes para completar la compra"<<endl;
            }else{
                cout <<"Restante: " <<RESTANTE <<endl;
                cout <<"Gracias por su compra. !Que disfrute sus nuevos zapatos!"<<endl;
            }
            break;
            }
        break;

        case 3:
        cout <<"---------------------------------------------------------------------"<<endl;
        cout <<"1.Zapato Deportivo: $80 (Descuento del 20%, precio con descuento $64)"<<endl;
        cout <<"2.Zapato Formal: $120 (Descuento del 20%, precio con descuento $96)"<<endl;
        cout <<"3.Zapato Premium: $250 (Descuento del 20$, precio con descuento $200)"<<endl;
        cout <<"4.Zapato Deportivo: $70 (Descuento del 15%, precio con descuento)    "<<endl;
        cout <<"5.Zapato Elegante: $100 (Descuento del 15%, precio con descuento)    "<<endl;
        cout <<"6.Zapato Premium: $250 (Descuento del 15$, precio con descuento)     "<<endl;
        cout <<"Opciones: ";
        cout <<" "<<endl;
        cin >>OPCION2;

            
            switch(OPCION2)
            {
                case 1:
            cout <<"Saldo disponible: " <<CARTERA <<endl;
            cout <<"Producto seleccionado - Zapato deportivo: " <<DEPORTIVO <<endl;
            RESTANTE = CARTERA - DEPORTIVO;
            FALTANTE = DEPORTIVO - CARTERA;
            if(CARTERA < DEPORTIVO){
                cout <<"Faltante: " <<FALTANTE <<endl;
                cout <<"Fondos insuficientes para completar la compra"<<endl;
            }else{
                cout <<"Restante: " <<RESTANTE <<endl;
                cout <<"Gracias por su compra. !Que disfrute sus nuevos zapatos!"<<endl;
            }
            break;
            
            case 2:
            cout <<"Saldo disponible: " <<CARTERA<<endl;
            cout <<"Producto seleccionado - Zapato formal: " <<FORMAL<<endl;
            RESTANTE = CARTERA - FORMAL;
            FALTANTE = FORMAL - CARTERA;
            if(CARTERA < FORMAL){
                cout <<"Faltante: " <<FALTANTE <<endl;
                cout <<"Fondos insuficientes para completar la compra"<<endl;
            }else{
                cout <<"Restante: " <<RESTANTE <<endl;
                cout <<"Gracias por su compra. !Que disfrute sus nuevos zapatos!"<<endl;
            }
            break;

            case 3:
            cout <<"Saldo disponible: " <<CARTERA<<endl;
            cout <<"Producto seleccionado - Zapato premium: " <<PREMIUM<<endl;
            RESTANTE = CARTERA - PREMIUM;
            FALTANTE = PREMIUM - CARTERA;
            if(CARTERA < PREMIUM){
                cout <<"Faltante: " <<FALTANTE <<endl;
                cout <<"Fondos insuficientes para completar la compra"<<endl;
            }else{
                cout <<"Restante: " <<RESTANTE <<endl;
                cout <<"Gracias por su compra. !Que disfrute sus nuevos zapatos!"<<endl;
            }
            break;

            case 4:
            cout <<"Saldo disponible: " <<CARTERA <<endl;
            cout <<"Producto seleccionado - Zapato casual: " <<CASUAL <<endl;
            RESTANTE = CARTERA - CASUAL;
            FALTANTE = CASUAL - CARTERA;
            if(CARTERA < CASUAL){
                cout <<"Faltante: " <<FALTANTE <<endl;
                cout <<"Fondos insuficientes para completar la compra"<<endl;
            }else{
                cout <<"Restante: " <<RESTANTE <<endl;
                cout <<"Gracias por su compra. !Que disfrute sus nuevos zapatos!"<<endl;
            }
            break;

            case 5:
            cout <<"Saldo disponible: " <<CARTERA<<endl;
            cout <<"Producto seleccionado - Zapato elegante: " <<ELEGANTE<<endl;
            RESTANTE = CARTERA - ELEGANTE;
            FALTANTE = ELEGANTE - CARTERA;
            if(CARTERA < ELEGANTE){
                cout <<"Faltante: " <<FALTANTE <<endl;
                cout <<"Fondos insuficientes para completar la compra"<<endl;
            }else{
                cout <<"Restante: " <<RESTANTE <<endl;
                cout <<"Gracias por su compra. !Que disfrute sus nuevos zapatos!"<<endl;
            }
            break;

            case 6:
            cout <<"Saldo disponible: " <<CARTERA<<endl;
            cout <<"Producto seleccionado - Zapato premium: " <<PREMIUM1<<endl;
            RESTANTE = CARTERA - PREMIUM1;
            FALTANTE = PREMIUM1 - CARTERA;
            if(CARTERA < PREMIUM1){
                cout <<"Faltante: " <<FALTANTE <<endl;
                cout <<"Fondos insuficientes para completar la compra"<<endl;
            }else{
                cout <<"Restante: " <<RESTANTE <<endl;
                cout <<"Gracias por su compra. !Que disfrute sus nuevos zapatos!"<<endl;
            }
            break;
            }  
        break;
    }
    return 0;
}