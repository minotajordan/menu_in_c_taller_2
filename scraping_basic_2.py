import requests
from bs4 import BeautifulSoup
import json

# Realizar una solicitud HTTP a la página web
url = "https://bitmaker.la"
response = requests.get(url)

datos = []

# Parsear el contenido HTML utilizando BeautifulSoup
soup = BeautifulSoup(response.content, "html.parser")

# Extraer los elementos deseados de la página web
# print(soup)
h2 = soup.find("h2").text
parrafos = soup.find_all("p")

# Imprimir los resultados
# print("Content H2:", h2)
# print("Parrafos:", parrafos)
for parrafo in parrafos:
    datos.append({"p": parrafo.text})

json_datos = json.dumps(datos)
print(json_datos)
