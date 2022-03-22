#include <stdio.h>
int main (){

    for(int i=1;i<=1;i++){
    	long long int b,output1=0,output2=0,store=0;
    	scanf("%lld",&b);
    	long long int c[b];
    	for(int j=0;j<b;j++){
    		scanf("%lld",&c[j]);
		}
		output1=c[0];
    	output2=c[1];
 
    	if (output1<output2){
        	store=output1;
        	output1=output2;
        	output2=store;
    	}
    	
    	for (int j=2;j<b;j++){
        	if (c[j]>output1){
            	output2=output1;
            	output1=c[j];
        	}
        	else if (c[j]>output2 && c[j]!=output1) {
				output2=c[j];
				}
    	}
    	printf("%lld\n",output2);
	}
    return 0;
}
/*
5
5
1 2 3 4 5 
4
4 4 4 4 
3
10 1 2
7
11 7 4 8 5 9 6
100
15
69
21
6
17
91
78
79
20
37
99
7
87
74
5
66
40
73
40
11
93
100
80
8
94
36
42
74
90
100
19
80
34
8
24
26
44
16
41
98
55
98
88
72
39
10
69
10
72
89
8
14
78
93
73
60
42
51
82
99
79
54
33
85
90
24
89
74
30
67
49
67
6
42
26
85
90
51
36
71
56
94
77
78
95
90
56
59
71
72
89
62
61
81
67
56
87
83
63
68
*/
