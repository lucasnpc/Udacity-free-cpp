#include<iostream>

int main()
{
    int arr[4][4];
    int vec[4], product[4];
    int sum = 0;
    
    for(int i = 0; i< 4; i++ ){
        for (int j = 0; j < 4; j++){
            std::cin >> arr[i][j];
        }
    }
    
    for(int i =0;i<4;i++){
        std::cin >> vec[i];
    }
    
    for(int i = 0; i < 4; i++ ){
        for (int j = 0; j < 4; j++){
           sum += (arr[i][j] *vec[i]);
        }
        product[i] = sum;
        sum = 0;
    }
    
    for(int i = 0; i< 4; i++ ){
        std::cout<<"product["<<i<<"] = "<<product[i]<<"\n";
    }
    
    return 0;
}