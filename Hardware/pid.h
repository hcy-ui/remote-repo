#ifndef __PID_H
#define __PID_H

typedef struct 
{
    float Target;
    float Actual;
    float Out;

    float Kp;
    float Ki;
    float Kd;

    float Error0;
    float Error1;
    float ErrorInt;

    float OutMax;
    float OutMin;

    float DifOut;//滤波变量



    int16_t Speed_Left;
    int16_t Speed_Right;

    int32_t ErrorIntMax;//最大积分（参考20000）
    int32_t ErrorIntMin;//反向最大积分
    
} PID_t;

void PID_Update(PID_t *p);

#endif
