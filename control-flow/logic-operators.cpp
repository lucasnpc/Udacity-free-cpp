#include<iostream>
#include<string>


int main()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    
    int A = 0;
    int B = 0;
    int C = 0;
    int Q;
    Q = A;
    std::string TorF[] = {"False", "True"};
    
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t(A&&(!B||!C))\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<TorF[Q]<<"\n";

    C = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<TorF[Q]<<"\n";
 
    C = 0; 
    B = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<TorF[Q]<<"\n";

    C = 1; 
    B = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<TorF[Q]<<"\n";

    C = 0; 
    B = 0;
    A = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<TorF[Q]<<"\n";

    C = 1; 
    B = 0;
    A = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<TorF[Q]<<"\n";

    C = 0; 
    B = 1;
    A = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<TorF[Q]<<"\n";

    C = 1; 
    B = 1;
    A = 1;
    Q = A;
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<TorF[Q]<<"\n";

    return 0;
}