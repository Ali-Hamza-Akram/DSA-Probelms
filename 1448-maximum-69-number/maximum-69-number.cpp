class Solution {
public:
    int maximum69Number (int num) {
        string Num = to_string(num);
        for(int i=0; i<Num.size(); i++){
            if(Num[i] == '6'){
                Num[i] = '9';
                break;
            }
        }
        num = stoi(Num);
        return num;
    }
};