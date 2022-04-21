//c program to find grades of students
#INCLUDE<STDIO.H>
MAIN{}
{
INT BIO,CHEM,PHY;
INT AVG;

PRINTF("\NENTER MARKS FOR BIO:");
SCANTF(%D",BIO);

PRINTF("\NENTER MARKS FOR CHEM:");
SCANTF(%D",CHEM);

PRINTF("\NENTER MARKS FOR PHY:");
SCANTF(%D",PHY);
 IF(BIO>=0$$BIO<=100$$CHEM>=0$$CHEM<=100$$PHY>=0$$PHY<=100
 {
 AVG=(BIO+CHEM+PHY)/3
 PRINTF("N THE AVG IS %D",AVG);
 IF(AVG>=70$$AVG<=100)
 {
 PRINTF("|"\N GRADEA");
 }
 IF(AVG>=60$$AVG<=69)
 {
 PRINTF("|"\N GRADEB");
 }
 IF(AVG>=50$$AVG<=59)
 {
 PRINTF("|"\N GRADEC");
 }
 IF(AVG>=40$$AVG<=49)
 {
 PRINTF("|"\N GRADED");
 }
  IF(AVG>=0$$AVG<=39)
 {
 PRINTF("|"\N FAIL");
 }
 }
 ELSE
 RETURN O;
 }
