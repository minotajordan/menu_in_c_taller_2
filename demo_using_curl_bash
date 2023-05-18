
#include <stdio.h>
#include <stdlib.h>

#define SHELLSCRIPT "\
#/bin/bash \n\
curl --request POST \\\n\
--url https://api.sendgrid.com/v3/mail/send \\\n\
--header 'Authorization: Bearer TOKEN' \\\n\
--header 'Content-Type: application/json' \\\n\
--data '{\"personalizations\": [{\"to\": [{\"email\": \"popjj@live.com\"}]}],\"from\": {\"email\": \"popjj@unimayor.edu.co\"},\"subject\": \"Hello, World!\",\"content\": [{\"type\": \"text/plain\", \"value\": \"Enviado desde une ejecutable en C RUN INTENTO 2  !\"}]}' \n\
"

int main()
{
    puts("Ejecutando script :");
    puts(SHELLSCRIPT);
    puts("Starting now:");
    system(SHELLSCRIPT);
    return 0;
}
