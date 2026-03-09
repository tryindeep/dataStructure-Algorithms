 #include<iostream>
 using namespace std;

//  int main (){
    // ---------------------DATA Types----------------------//

    //int : -10^9 to 10^9
    //long : -10^12 to 10^12
    //long long : -10^18 to 10^18
    //float :
    //double
    //character

    // if i have to get all charecter in a single with space we have to use (getline) in c++.
    //it only takes all till the line break
    // string str;

    // getline(cin, str);
    // cout << str;

    // --------------arrays and strings------------

    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // cout << arr[4];

    // ------------------- 2d Array -----------------//
    // arr[rows][columns]
    // int arr[3][5];

    // Strings -------
    // string s = "Tridip";
    // int len = s.size();
    // cout << s[len -1];

    //-------------------------- Functions ----------------------//
    // functions are set of code which performs something for you 
    // Functions are used to modularise code
    // Functions are used to incrase readability 
    // Functions are used to use the same code multiple times

    // functions type :espresso i am wroking late cause i am a singer fgh
    // void 
    // return 
    // parameterized
    // non parameteriz so lame

    // int sum ( int num1 , int num2 ){
    //     int num3 = num1 + num2;
    //     return num3;
    // }

    // int main (){
    //     int num1,num2;
    //     cin >> num1 >> num2;
    //     int res = sum(num1, num2);
    //     cout << "Sum :  " << res;
    //     return 0 ;
    // }
    // ----------- Pass by reference and pass by value ----------- //

    //* pass by value -- sending copy of the value 
    // void doSomething  (int num){
    //     num += 5;
    //     cout << num << endl;
    //     num += 5;
    //     cout << num << endl;
    //     num += 5;
    //     cout << num << endl;
    // }
    // int main (){
    //     int num = 10;
    //     doSomething(num);
    //     cout << num << endl;
    //     return 0 ;
    // }

    //---------------Pass by reference------------------
    void doSomething  (int &num){ // & sending the real value
        num += 5;
        cout << num << endl;
        num += 5;
        cout << num << endl;
        num += 5;
        cout << num << endl;
    }
    int main (){
        int num = 10;
        doSomething(num);
        cout << num << endl;
        return 0 ;
    }
// but remember arrays are always pass by reference (address)