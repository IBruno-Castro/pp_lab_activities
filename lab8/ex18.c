/*
18. Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio 
R. Essa função deve obedecer ao protótipo:
void calc_esfera(float R, float *area, float *volume);
A área da superfície e o volume são dados, respectivamente, por:
A = 4 *  * R2
V = 4/3 *  * R3
*/

void calc_esfera(float r, float *area, float *volume){
    *area = 4 * 3.14 * (r*r);
    *volume = (4/3) * 3.14 * (r*r*r);
}