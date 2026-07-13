#stringlength (which give lenght count) #
unsinged int astrleng ( char str[] )
{
  int i=0;
  while ( str[i] != '\0' )
    i++;
  return i;
}

#string copy ( which copy from source to destination ) #
chat *astrcpy ( char str1[] , char str2[] )
{
  int i = 0;
while ( ( str1 [i] = str2 [i] ) != '\0' ) 
  i++;
return str1;
}

# string concatnation ( which add second string to the end of first string ) #
char *astrcat ( char str1[] , char str2[] )
{
int i = 0 , j = 0;
while ( str1 [i] != '\0')
  i++ ;  / go to the end of first string
while ( str1 [ i++ ] = str2 [j++] ) ;
return str1;
}

#string compare ( which returns <0 if s1<s2 ; =0 if s1==s2 ; >0 if s1>s2) #
int astrcmp ( chat str1 [], char str2 [] )
{
  int i = 0;
for ( i = 0 ; str1[i] == str2[i] ; i++ )
  if ( str1 [i] == '\0')
    return 0;
return ( str1[i] - str2[i] );
}

