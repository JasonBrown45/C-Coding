#include <stdio.h>
#include <math.h>

struct student{
	char id[6];
	char nilai[3];
};

void sort(struct student data[], int b){
	struct student temp;
	for (int i = 1; i < b; i++) {
	temp = data[i];
	int j = i - 1;
	while (j >= 0 && data[j].nilai > temp.nilai){
		data[j + 1] = data[j];
		j--;
		}
	data[j + 1] = temp;
	}
}

int main(){
	struct student data[15]{{24882,88},{11372,66},{18064,74},{28763,86},{11372,92},{19845,81},{21241,70},{37192,69},{12448,48},{13277,77}};
	sort(data,10);
	for(int i=0;i<10;i++){
	printf("%s, %s\n",data[i].id,data[i].nilai);
	}
	return 0;
}

