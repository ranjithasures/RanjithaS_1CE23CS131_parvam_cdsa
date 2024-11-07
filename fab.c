#include<stdio.h>
void func(){
 static int i=0;
printf("%d\t",i);
i++;

}
int main(){
    for( int j=0;j<24;j++){
    func();
}
return 0;
}