void printShit(){

    string string1;
    float shit = 0;
    cout << "Write some shit: ";
    getline(std::cin, string1);
    stringstream(string1) >> shit;
    
    cout << "Shit less 1: " << shit-3 << endl;
}