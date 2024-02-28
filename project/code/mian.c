#include <stdio.h>


// 定义注射剂量选项
float doses[] = {0.8, 2, 3, 4, 5};


// 定义注射次数范围
int injection_Number[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180};

int main() {
        for (int i = 0; i < 5; i++) 
		{
            for (int j = 0; j < 18; j++) 
			{
                float a = doses[i];              
                int Number = injection_Number[j];
                float single_dose = a / Number;
                printf("注射剂量：%0.1f，注射次数：%d，单次注射剂量：%fml\n", a, Number, single_dose);
            }
        }
    return 0;
}
