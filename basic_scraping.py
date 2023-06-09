import requests
from bs4 import BeautifulSoup

# Realizar una solicitud HTTP a la página web
url = "https://ejemplo.com"
response = requests.get(url)

# Parsear el contenido HTML utilizando BeautifulSoup
soup = BeautifulSoup(response.content, "html.parser")

# Extraer los elementos deseados de la página web
titulo = soup.find("h1").text
parrafos = soup.find_all("p")

# Imprimir los resultados
print("Título:", titulo)
print("Parrafos:")
for parrafo in parrafos:
    print(parrafo.text)
