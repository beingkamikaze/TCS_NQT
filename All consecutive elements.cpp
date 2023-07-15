#include <math.h>

int findMax(int input[], int len) {
	if(len == 0){
		return -INFINITY;
	}
	int max = input[0];
	for(int i = 1; i < len; i++){
		if(input[i] > max){
			max = input[i];
		}
	}
	return max;
}

int findMin(int input[], int len) {
	if(len == 0){
		return INFINITY;
	}
	int min = input[0];
	for(int i = 1; i < len; i++){
		if(input[i] < min){
			min = input[i];
		}
	}
	return min;
}

int containsConsecutiveNumbers(int input[], int len){
	if(len == 0){
		return 1;
	}

	int min = findMin(input, len);
	int max = findMax(input, len);

	if(max - min + 1 != len){
		return 0;
	}

	for(int i = 0; i < len; i++){
		int index;
		if(input[i] > 0){
			index = input[i] - min;
		}
        else {
			index = -input[i] - min;
		}
		if(input[index] < 0){
			return 0;
		}
        else {
			input[index] = -input[index];
		}
	}
	return 1;
}
