#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

// Configuration du Wi-Fi
const char* ssid = "MaisonConnectee";
const char* password = "Maison123";

// Creation du serveur web
ESP8266WebServer server(80);

// Etat de la LED
bool ledAllumee = false;

// Page web
void afficherPage()
{
    String page = "<html>";
    page += "<head>";
    page += "<meta name='viewport' content='width=device-width, initial-scale=1'>";
    page += "</head>";
    page += "<body>";

    page += "<h1>Ma maison connectee</h1>";

    page += "<p>Etat de la LED : ";
    page += ledAllumee ? "Allumee" : "Eteinte";
    page += "</p>";

    page += "<a href='/on'><button>Allumer</button></a>";
    page += "<a href='/off'><button>Eteindre</button></a>";

    page += "</body></html>";

    server.send(200, "text/html", page);
}

// Allumer la LED
void allumerLED()
{
    digitalWrite(LED_BUILTIN, LOW);
    ledAllumee = true;

    afficherPage();
}

// Eteindre la LED
void eteindreLED()
{
    digitalWrite(LED_BUILTIN, HIGH);
    ledAllumee = false;

    afficherPage();
}

void setup()
{
    Serial.begin(115200);

    // Initialisation de la LED
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH);

    // Creation du reseau Wi-Fi
    WiFi.mode(WIFI_AP);

    if (!WiFi.softAP(ssid, password))
    {
        Serial.println("Erreur Wi-Fi");
        return;
    }

    Serial.println("Wi-Fi disponible !");
    Serial.print("Adresse IP : ");
    Serial.println(WiFi.softAPIP());

    // Association des adresses aux fonctions
    server.on("/", afficherPage);
    server.on("/on", allumerLED);
    server.on("/off", eteindreLED);

    // Demarrage du serveur
    server.begin();

    Serial.println("Serveur demarre");
}

void loop()
{
    server.handleClient();
}

