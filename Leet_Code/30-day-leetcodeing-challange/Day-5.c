/*My solution*/

int countElements(int* arr, int arrSize){
    int count = 0;
    for (int k = 0; k < arrSize; k++){
        for (int i = 0; i < arrSize; i++){
            if (i != k && arr[k]+1 == arr[i]){
                count += 1;
                break;
            }
        }
    }return count;
}



