#include <stdlib.h>
#include <stdio.h>

void burbuja(int nums[]);
void insercion(int nums[]);
void seleccion(int nums[]);

int main(){
    int nums[5]={5,3,1,2,4};

    burbuja(nums);
    insercion(nums);
    seleccion(nums);

    
    return 0;
}

void burbuja(int nums[]){
    int aux;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(nums[j]>nums[j+1]){
                aux=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=aux;
            }
        }
    }
    printf("\nBurbuja: \n");
    for (int i=0;i<5;i++)
        printf("%d",nums[i]);
}

void insercion(int nums[]){
    int aux;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(nums[j]<nums[j-1]&&j!=0){
                aux=nums[j];
                nums[j]=nums[j-1];
                nums[j-1]=aux;
            }
        }
    }
    printf("\nInsercion: \n");
    for (int i=0;i<5;i++)
        printf("%d",nums[i]);
}

void seleccion(int nums[]){
    int aux;
    for(int i=0;i<5;i++){
        int min=nums[i];
        for(int j=i+1;j<5;j++){
            if(min>nums[j]){
                min=nums[j];
            }
        }
        nums[i]=aux;
        nums[i]=min;
        min=aux;
    }
    printf("\nSeleccion: \n");
    for (int i=0;i<5;i++)
        printf("%d",nums[i]);
}