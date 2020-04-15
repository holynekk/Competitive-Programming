

bool canConstruct(char * ransomNote, char * magazine){
    
    int mag[26] = {0};   /*This line creates an array full of zero elements*/
    
    for (int k = 0; k < strlen(magazine); k++){
        mag[magazine[k]-'a']++;
    }for (int i = 0; i < strlen(ransomNote); i++){
        if (--mag[ransomNote[i]-'a'] < 0){
            return 0;
        }else;
    }return 1;
}


