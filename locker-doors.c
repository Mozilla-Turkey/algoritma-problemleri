//
//  locker-doors.c
//  mozilla-turkey
//
//  Created by Aslihan Akbiyik on 7.07.2021.
//  Copyright © 2021 Aslihan Akbiyik. All rights reserved.
//



#include <stdio.h>
#include <stdbool.h>

int i,t;

//0 kapalı -- 1 açık
bool kapi[100];

void kapiPozisyonuDegistir(int kapiNo)
{
    if(kapi[kapiNo-1] == 0)
        kapi[kapiNo-1] = 1;
    
    else
        kapi[kapiNo-1] = 0;
}

void bolenSayisinaGoreDegistir(int kapiNo)
{
    int tamBolenlerinSayisi = 0;
    
    for(t=1;t<=kapiNo;t++)
    {
        if(kapiNo % t == 0)
            tamBolenlerinSayisi++;
    }
    
    if(tamBolenlerinSayisi % 2 == 1)
        kapiPozisyonuDegistir(kapiNo);
    
}


int main()
{
    for(i=0;i<100;i++)
        kapi[i] = 0;
    
    for(i=1;i<101;i++)
        bolenSayisinaGoreDegistir(i);
    
    printf("Acik kapilarin numaralari \n");
    
    for(i=0;i<100;i++)
    {
        //if(kapi[i] == 1)
           // printf("%d \t",i+1);
            printf("%d \t", kapi[i]);
            
        
        
    }

    return 0;
}

