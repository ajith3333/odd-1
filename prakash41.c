char tmp[16];
scanf("%s", tmp);

int isDigit = 0;
int k=0;
while(k<strlen(tmp) && isDigit == 0){
  if(tmp[k] > 57 && tmp[k] < 48)
    isDigit = 0;
  else
    isDigit = 1;
  k++;
}
