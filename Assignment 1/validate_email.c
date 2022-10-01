#include<stdio.h>
#include <string.h>


int validation(char s[]){
    int length = strlen(s) , ind1=0 , ind2=0 ; 
    int at_num = 0 , dot_num = 0 , space_num = 0;
    // int  alp_num ;
    int at_index , dot_index ;  

    // checking first and last char is not  '.'  and '@'
    if(s[0]== '.' || s[0] == '@' ||s[length-1]== '.' || s[length-1] == '@' ){
    
        return 0 ; 
    }

    for(int i=1 ; i<length ; i++){
        // counting number of '@'
        if(s[i] == '@'){
            at_index = i ; 
            at_num ++ ; 

            if(at_num>=2){
                return 0 ; 
            }
        }

        // counting number of '.' 
        if(s[i] == '.'){
            dot_num++ ; 
            int dot_index = i ; 

        }

        if(s[i] == ' '){
            space_num++ ; 
        }

      


    }
    
    if(dot_num == 0 || at_num == 0  || space_num==0){
        return 0 ; 
    }

    if(dot_index<at_index || dot_index== at_index+1 ){
       
        return 0 ; 
     
    }


    return 1; 
}
 
 
void main()
{
    char s1[50];

    printf("\n Please Enter email id.\n") ;
    gets(s1) ;
 
 
    if ( validation(s1)==1 ) 
    printf("\n Your entered email id is valid.\n") ;
    
    else
    printf("\nYour entered email id is not valid.\n") ;
 
 
    
}